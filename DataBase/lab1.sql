# 创建数据库 Educ
create database Educ;
use Educ;

# 学生表 结构
create table Student(
    Sno varchar(11) not null primary key,
    Sname varchar(10) not null,
    Ssex varchar(2) not null,
    Sbrithday date,
    Saddres varchar(10),
    Sgrade smallint,
    Smajor varchar(10),
    Sdept varchar(2)
);

# 课程表 结构
create table Course(
    Cno varchar(4) not null primary key,
    Cname varchar(20) not null,
    Cpno varchar(4),
    foreign key (Cpno) references  Course(cno),
    Ctype varchar(8),
    Chour smallint,
    Ccredit decimal(3, 1),
    Cterm smallint,
    Cabstract varchar(200)
);

# 教师表 结构
create table Teacher(
    TID varchar(8) not null primary key,
    Tname varchar(10) not null,
    Tsex char(2),
    Tposition varchar(10),
    Tbirthday date,
    Tworkdate date,
    Tdept varchar(2)
);

# 学生选课表 结构
create table SC(
    Sno varchar(11) not null,
    foreign key (Sno) references Student(Sno) on update cascade,
    Cno varchar(11) not null,
    foreign key (Cno) references Course(Cno),
    primary key(Sno, Cno),
    grade decimal(5, 1)
);

# 教师任课表 结构
create table TC(
    TID varchar(8) not null,
    foreign key (TID) references Teacher(TID),
    Cno varchar(4) not null,
    foreign key (Cno) references Course(Cno),
    primary key (TID, Cno),
    Classroom varchar(12)
);

alter table Teacher
add column Taddress varchar(10);

alter table Student
modify column Sdept varchar(4);

alter table Teacher
alter Taddress drop default;

drop table TC;
drop table SC;
drop table Teacher;
drop table Course;
drop table Student;
