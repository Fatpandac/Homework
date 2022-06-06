# 1
use Educ;
# 2
create user stu1 identified by 'stu1';
create user stu2 identified by 'stu2';
create user stu3 identified by 'stu3';

# Mysql 中有密码等级现在可以使用一下命令查看
# SHOW VARIABLES LIKE 'validate_password%';
# 之后使用
# set GLOBAL validate_password.policy=LOW;
# 等对代码等级要求进行设置即可设置低安全性密码

# 3.1
grant select, insert
on SC
to stu1;
# 3.2
grant update, delete
on Student
to stu1;
# 3.3
grant select, insert, update, delete
on Course
to stu1;
# 4.1
grant select
on SC
to stu2;
# 4.2
grant insert
on Student
to stu2;
# 4.3
grant update
on Course
to stu2;
# 4.4
grant update(Tdept)
on Teacher
to stu2;
# 4.5
grant delete
on TC
to stu2;

# 授权操作后可能授权并没有生效需要使用下面命令查看
# select host,user,grant_priv,Super_priv from mysql.user;
# 如果没有生效需要使用
# update mysql.user set grant_priv='Y';
# 使其全部生效

# 5.1.1
use Educ;
select * from SC;
select * from Course;
select * from Student;
# 5.1.2
insert into SC values('20121323012', 'C004', 90);
insert into Student values('20205830420', 'Fatpandac', '男', null, null, null, null, null); # 无法运行
insert into Course values('C010', 'ML', null, null, null, null, null, null);
# 5.1.3
update SC set SC.grade=80 where Sno='20121323012';
update Student set Student.Sdept='SE' where Sno='20205830420';
update Course set Course.Ccredit=4 where Cno='C010';
# 5.1.4
delete from SC where Sno='20121323012' and Cno='C003';
delete from Student where Sno='20205830420';
delete from Course where Cno='C010';

# 5.2.1
use Educ;
select * from SC;
select * from Student;
select * from Course;
select * from Teacher;
# 5.2.2
insert into SC values('20121323012', 'C003', 90);
insert into Student values('20205830421', 'Fatpanda', '男', null, null, null, null, null);
insert into Course values('C010', 'ML', null, null, null, null, null, null);
insert into Teacher values('101123119', 'name', '男', NULL, NULL, NULL, NULL);
insert into TC(TID, Cno, Classroom) VALUES ('101123119','C001',NULL);
# 5.2.3
update SC set SC.grade=80 where Sno='20121323012';
update Student set Student.Sdept='SE' where Sno='20205830420';
update Course set Course.Ccredit=4 where Cno='C010';
update Teacher set Teacher.Tdept='SE'where Tdept='SE';
update tc set Classroom='AB001' where TID='19951313';
# 5.2.4
delete from Sc where Sno='20121323001' and Cno='C003';
delete from Student where Sname='张露';
delete from Course where Cname='程序设计基础';
delete from Teacher where TID='20061307';
delete from Tc where TID='20061307';
# 5.2.5
update Teacher set Tdept='CH' where Tdept='SE';

# 5.3
revoke select on SC from stu1;
revoke update,insert on Student from stu1;
revoke delete on Course from stu1;

# 5.4 [5.1~]

# 6
create role Myrole;
grant select, insert
on Student
to Myrole;
grant Myrole to stu3;

# 需要使用
# show variables like 'activate_all_roles_on_login';
# 和
# select current_role();
# 查看当前的的角色是否被激活，如果没有激活需要使用
# set global activate_all_roles_on_login=on;
# 将其激活才能使用角色授予的权限。

# test
use Educ;
select * from Student;

# 7
drop user stu1;
drop user stu2;
drop user stu3;
drop role Myrole;
