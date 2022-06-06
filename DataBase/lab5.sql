# 1
alter table Teacher
add constraint ck_Tsex check(Tsex in ('男', '女'));

insert into Teacher
values ('19951319', '王五', '男', '副教授', '1970-12-08', '1995-07-25', 'SE');
insert into Teacher
values ('19951310', '张三', '未知', '副教授', '1970-12-08', '1995-07-25', 'SE');

alter table Teacher
drop constraint ck_Tsex;

# 2
alter table Teacher
alter column Tdept set Default 'SE';

insert into Teacher(TID, Tname, Tsex, Tposition, Tbirthday, Tworkdate)
values ('19951300', '三', '女', '副教授', '1970-12-08', '1995-07-25');

insert into Teacher
values ('19951000', '四', '女', '副教授', '1970-12-08', '1995-07-25', 'td');

select *
from Teacher;

alter table Teacher
alter column Tdept drop default;

# 3
alter table Student
add constraint ck_Ssex check(Ssex in ('男', '女'));

insert into Student
values('20130101001', '李画'  , '女', '1995-01-23', '重庆', 2013, '汉语言', 'CH');
insert into Student
values('20130101009', '李志'  , '未知', '1995-01-23', '重庆', 2013, '汉语言', 'CH');

alter table Student
drop constraint ck_Ssex;

# 4
alter table Student
alter column Sdept set default 'SE';

insert into Student(Sno, Sname, Ssex, Sbrithday, Saddres, Sgrade, Smajor)
values('20130101090', '李以'  , '女', '1995-01-23', '重庆', 2013, '汉语言');
insert into Student
values('20130101091', '李碰'  , '女', '1995-01-23', '重庆', 2013, '汉语言', 'CH');

select *
from Student;

alter table Student
alter column Sdept drop default;

# 5.1
alter table SC
add constraint fk_sc_course foreign key (Cno) references Course(Cno)
on delete no action
on update no action;

insert SC(sno, cno, grade)
values ('20121323001', 'C005', 90);

insert SC(sno, cno, grade)
values ('20121323001', 'C006', 90);

alter table SC
drop constraint fk_sc_course;

# 5.2

alter table SC
add constraint fk_sc_course foreign key (Cno) references Course(Cno)
on delete cascade;

delete from Course
where Cno='C001';

delete from Course
where Cno='N002';

delete from SC
where Cno='C002';

# 5.3
alter table SC
add constraint fk_sc_course foreign key (Cno) references Course(Cno)
on update no action;

update Course
set Cno='C008' where Cno = 'C003';

update Course
set Cno='N001' where Cno = 'N002';

update SC
set Cno = 'C006'
where Cno='C003';

alter table SC
add constraint fk_sc_course foreign key (Cno) references Course(Cno)
on update cascade;

update Course
set Cno='C008' where Cno = 'C003';

update Course
set Cno='N001' where Cno = 'N002';

update SC
set Cno = 'C006'
where Cno='C004';

# 5.4
alter table TC
add constraint fk_tc_teacher foreign key (TID) references Teacher(TID)
on delete no action;

delete
from Teacher
where TID='20061307';

delete
from Teacher
where TID='20051303';

delete
from TC
where TID='19951313';

alter table TC
drop constraint fk_tc_teacher;

alter table TC
add constraint fk_tc_teacher foreign key (TID) references Teacher(TID)
on delete cascade;

delete
from Teacher
where TID='20061307';

delete
from Teacher
where TID='20051303';

delete
from TC
where TID='19951313';

alter table TC
drop constraint fk_tc_teacher;

# 5.5
alter table TC
add constraint fk_tc_teacher foreign key (TID) references Teacher(TID)
on update no action;

update Teacher
set TID='20061308'
where TID='20061307';

update TC
set TID='19951313'
where TID='20051303';

alter table TC
drop constraint fk_tc_teacher;

alter table TC
add constraint fk_tc_teacher foreign key (TID) references Teacher(TID)
on update cascade;

update Teacher
set TID='20061308'
where TID='20061307';

update TC
set TID='20061308'
where TID='20051303';

alter table TC
drop constraint fk_tc_teacher;

# 6
alter table SC
add constraint fk_sc_course foreign key (Cno) references Course(Cno)
on update cascade;

update SC
set Cno='C033'
where Cno='C001';

update Course
set Cno='C033'
where Cno='C001';

alter table SC
drop constraint fk_sc_course;

# 7
insert SC values('20131207001', 'C087', '80');

alter table SC
add constraint fk_sc_course foreign key (Cno) references Course(Cno)
on update cascade;

alter table SC
add constraint fk_sc_student foreign key (Sno) references Student(Sno)
on update cascade;
