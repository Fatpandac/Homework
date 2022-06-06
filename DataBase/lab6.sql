use Educ;

# 编写存储过程，查询学生表 Student 和选课表 SC，返回指定学生的选课信息，输出
# 信息包括学生姓名、课程名和课程成绩。要求:以学生姓名作为存储过程的入口参数;
# 如果 未提供参数，则使用默认值(查询以“张”姓打头的学生)

create procedure getStudentInfo(in name varchar(15))
begin
    declare searchName varchar(15);

    if LENGTH(name) <= 0 or null is null then
        set searchName = '%张_%';
    else
        set searchName = name;
    end if;

    select searchName;

    select Sname, Cname, grade
    from Student, SC, Course
    where Student.Sno=SC.Sno and SC.Cno=Course.Cno and Student.Sname like searchName;
end;

call getStudentInfo(null);

drop procedure getStudentInfo;

# 编写存储过程，查看指定课程号的课程成绩及格的学生信息，并返回课程号及格人数。
# 要求:课程成绩的及格分数线作为参数由用户输入，默认及格分数线为 60。

create procedure getPassCount(in courseNo varchar(15), in passGrade int, out passCount int)
begin
    declare passGradeNum int;

    if passGrade is null then
        set passGradeNum = 60;
    else
        set passGradeNum = passGrade;
    end if;

    select count(sno) into passCount
    from SC
    where Cno = courseNo and grade>=60;
end;

set @passCount = 0;
call getPassCount('C001', null, @passCount);
select @passCount;

drop procedure getPassCount;

# 编写存储过程，统计到目前为止，不同专业指定学年学期的课程平均分
# 指定学年学期的格式为:YYYY-YYYY/N，其中前 9 位表示学年，最后 1 位表示本学年的第几学期
# 如 2012-2013/1 表示 2012-2013 学年的第 1 学期。
# 如果查询学年学期为 2012-2013/1 课程成绩，则对于 2011 级应该查询课程表第 3 学期开设的课程成绩，
# 对于 2010 级应该查询课程表第 5 学期开设的课程，其余同此

create procedure getAvgGradeByYear(in date varchar(11))
begin
    declare date_up int;
    declare date_low int;
    declare term int;

    set date_up = CONVERT(SUBSTRING(date, 6, 4), SIGNED);
    set date_low = (select min(Sgrade) from Student);
    if (date_up - date_low > 3) then
        set date_low = date_up - 3;
    end if;
    set term = CONVERT(SUBSTRING(date, 11, 1), SIGNED);

    while (date_up > date_low) do
        select date_up, date, Smajor, term, AVG(grade)
        from Student, SC, Course
        where Student.Sgrade=date_up and Course.Cterm=term and Course.Cno=SC.Cno and Student.Sno=SC.Sno
        group by Smajor;
        set date_up = date_up - 1;
        set term = term + 2;
    end while;
end;

call getAvgGradeByYear('2012-2013/1');

drop procedure getAvgGradeByYear;

# 实现汇总不同学院、不同年龄段、不同职称的教师人数。要求将学 院名称作为入口参数

create procedure countMembersByDept(in dept varchar(4))
begin
    declare age_up int;
    declare age_low int;
    declare ageRegion varchar(20);
    set age_up = 80;
    set age_low = 71;

    while (age_low > 20)
    do
        set ageRegion = CONCAT(CAST(age_low as CHAR(4)), '-', CAST(age_up as CHAR(4)));
        select ageRegion, dept, Tposition, COUNT(*)
        from Teacher
        where Tdept=dept and (year(now()) - year(Tbirthday)) between age_low and age_up
        group by Tposition;

        set age_up = age_low - 1;
        set age_low = age_low - 10;
    end while;
end;

call countMembersByDept('SE');

drop procedure countMembersByDept;
