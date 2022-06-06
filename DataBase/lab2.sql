use Educ;

insert into Student values
('20130102001', '李玲'  , '女', '1995-01-23', '重庆', 2013, '汉语言', 'CH'),
('20130102003', '刘显容', '女', '1995-03-28', '湖南', 2013, '汉语言', 'CH'),
('20130102002', '王坤鹏', '男', '1994-10-27', '四川', 2013, '汉语言', 'CH'),
('20131322001', '李小飞', '男', '1995-07-19', '重庆', 2013, '软件工程', 'SE'),
('20131322002', '赵先平', '男', '1993-12-05', '重庆', 2013, '软件工程', 'SE'),
('20121323001', '张露'  , '女', '1994-05-24', '四川', 2012, '网络工程', 'SE'),
('20121323012', '陈流星', '男', '1994-09-20', '重庆', 2012, '网络工程', 'SE'),
('20121323087', '何燕'  , '女', '1993-10-03', '重庆', 2012, '网络工程', 'SE');

insert into course values
('C001', '计算机导论', null, '专业基础', 32, 2, 1, null);
insert into course values
('C002', '程序设计基础', 'C001', '专业基础', 64, 4, 2, null);
insert into course values
('C003', '数据结构', 'C002', '专业基础', 64, 4, 3, null);
insert into course values
('C004', '面向对象技术', 'C001', '专业基础', 64, 4, 3, null);
insert into course values
('C005', 'JAVA', 'C004', '专业技术', 48, 3, 4, null);
insert into course values
('R001', '软件工程', 'C005', '专业基础', 48, 3, 6, null);
insert into course values
('N001', '计算机网络', null, '专业基础', 48, 3, 4, null);
insert into course values
('N002', '互联网技术', 'N001', '专业技术', 48, 3, 5, null);

insert into teacher values
('20051303', '王苹', '女', '副教授', '1973-09-21', '2005-07-01', 'SE');
insert into teacher values
('20061307', '杨钢', '男', '讲师', '1979-03-04', '2006-07-16', 'SE');
insert into teacher values
('19951313', '秦海东', '男', '副教授', '1970-12-08', '1995-07-25', 'SE');

insert into sc values
('20121323001', 'C001', '93');
insert into sc values
('20121323001', 'C002', '87');
insert into sc values
('20121323001', 'C003', null);
insert into sc values
('20121323001', 'C004', null);
insert into sc values
('20121323012', 'C001', '88');
insert into sc values
('20121323012', 'C002', '83');
insert into sc values
('20131322001', 'C001', null);
insert into sc values
('20131322002', 'C001', null);

insert into tc values
('20051303','C001','JB1208');
insert into tc values
('20061307','N001','JD1401');
insert into tc values
('19951313','C003','JA1304');
insert into tc values
('20051303','C002','JA1106');

UPDATE Student
set Sno='20020020000' where Sname='张露';

# 将 Course 表中“数据结构”的学分修改为 5 学分
update Course
set Ccredit=5 where Cno = 'C003';

# 将 SC 表中每个学生的每门课程成绩调整为原成绩的 85%
update SC
set grade = grade * 0.85 where grade is not null;

# 将所有女生选修的课程成绩加 1 分
update SC
set grade = grade + 1 where Sno in (select Sno from Student where Ssex = '女');

# 将选修了“程序设计基础”课程的学生课程成绩均提高 5%
update SC
set grade = grade * 1.05 where Sc.cno = (select Cno from Course where Cname='程序设计基础');

# 在 TC 表中删除工号为 20061307 的教师信息
delete
from TC
where TID='20061307';

# 在 SC 表中删除“李玲”同学的所有选课信息
delete
from SC
where Sc.Sno = (
    select sno
    from Student
    where Sname='李玲'
    );

# 删除 Student 表、Teacher 表、Course 表、SC 表和 TC 表中 的所有数据
drop table TC;
drop table SC;
drop table Teacher;
drop table Course;
drop table Student;
