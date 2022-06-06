use Educ;

# 查询软件工程学院('SE')学生的学号和姓名
select Sno,Sname
from Student
where Sdept='SE';

# 查询求选修 C002 课程的学生学号和成绩，结果按成绩降序排列;如成绩相同，则按学号升序排列
select Sno
from SC
where Cno='C002'
group by Sno;

# 查询选修 C002 课程成绩在 80-90 之间的学生学号和成绩，并将成绩乘以 0.9 输出
select Sno, grade*0.9
from SC
where grade between 80 and 90;

# 查询软件工程学院('SE')或文学院('CH')姓“张”的学生信息
select Student.*
from Student
where Sname like '张%' and Sdept in ('SE', 'CH');

# 查询“秦海东”教师担任的课程总学时数
select Course.Chour
from Course, TC, Teacher
where TC.TID=Teacher.TID and TC.Cno=Course.Cno and Teacher.Tname = '秦海东';

# 查询“陈流星”同学所选修课程的任课教师信息
select distinct Teacher.*
from Teacher,TC,Student,SC
where TC.TID=Teacher.TID and TC.Cno=SC.Cno and SC.Sno=Student.Sno and Student.Sname = '陈流星';

# 查询总成绩在 200 分以上的学生学号、总成绩和平均成绩
select Sno, SUM(grade), avg(grade)
from SC
group by SC.Sno
having SUM(grade) > 200;

# 在 FROM 子句中用 INNER JOIN 连接符指定连接条件查询所有选修 C002 号课程并取得课程成绩的学生学号、姓名和成绩
select Student.Sno, Student.Sname, SC.grade
from Student
inner join SC on Student.Sno = SC.Sno and SC.Cno='C002' and grade is not null;

# 查询选修课程一样且成绩相同的学生基本情况(使用自连接查询)
select *
from Student
where Sno in (select x.Sno
              from SC x,SC y
              where x.Cno=y.Cno and x.Grade=y.Grade and x.Sno != y.Sno);

# 查询所有考试成绩及格的学生成绩信息，结果中包含学生学号、姓名、性别、
# 选修课程编号、成绩，并按照成绩进行降序排列(使用内连接 INNER)
select Student.Sno, Sname, Ssex, Cno, grade
from Student inner join SC on Student.Sno=SC.Sno
where grade >= 60
order by grade desc;

# 查询所有学生的总成绩(包括没有成绩的学生)、学号和姓名(外部连接查询)
select Student.Sno,sum(grade)
from SC left join Student on SC.Sno = Student.Sno group by Student.Sno;

# 查询某课程成绩在 90 分以上的学生学号和姓名(使用谓词 IN 连接子查询)
select Sno, Sname
from Student
where Sno in (select Sno
              from SC
              where grade > 90);

# 查询有课程成绩的学生学号和姓名(使用谓词 EXISTS 连接子查询)
select Sno, Sname
from Student
where exists(select Sno
             from SC
             where SC.Sno=Student.Sno and grade is not null);

# 从 Course 表中查询课程名中包含“数据”的课程信息
select *
from Course
where Cname like '%数据%';

# 查询所有学生及其选修课情况(包括未选修任何课程的学生)，
# 显示学生姓名、课程 名称和课程成绩(要求使用外连接)
select Sname,Cname,Grade
from Student
    left outer join SC on Student.Sno=SC.Sno
    left outer join Course on Course.Cno=SC.Cno;

# 查询所有学生中平均成绩最高的学生学号
select Sno
from SC
group by Sno
order by AVG(grade) desc limit 1;

# 查询所有软件工程学院的学生学号、选修课程号以及分数(使用 EXISTS 谓词)
select Sno, Cno, grade
from SC
where exists(select Sno
             from Student
             where Sdept='SE');

# 查询选修了学号 20131322001 同学所选修全部课程的学生姓名、学号、课程名
select S.Sname,S.Sno,C.Cname
from SC
left join Student S on S.Sno = SC.Sno
left join Course C on C.Cno = SC.Cno
where SC.Cno in (select Cno
                 from SC
                 where SC.Sno='20131322001');

# 求选修了 C001 号课程的学生中，成绩高于“陈流星”选修 C001 课程的所有学生学号、
# 姓名和成绩
select SC.Sno, Sname, grade
from SC
left join Student S on S.Sno = SC.Sno
where Cno='C001' and grade > (select grade
                              from SC
                              left join Student S2 on S2.Sno = SC.Sno
                              where Cno='C001' and S2.Sname='陈流星');

# 查询“计算机导论”课程成绩比“数据结构”课程成绩高的学生姓名、课程名、计算机
# 导论课程成绩以及数据结构课程成绩
select Sname,C.Cname,S.grade,S1.grade
from SC S left join Course C on C.Cno = S.Cno,
     SC S1 left join Course C1 on C1.Cno = S1.Cno,
     Student
where S.Sno=S1.Sno and
      Student.Sno=S.Sno and
      C.Cname='计算机导论' and
      C1.Cname='数据结构' and S.grade > S1.grade;
