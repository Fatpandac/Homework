定义员工类Employee, 有姓名, 出生月等属性, 提供构造方法, 提供一个返回指定月工资的方法getSalary(int month),  如果发工资的月份是员工的出生月,发放生日奖励200。定义固定月薪的员工类SalariedEmpoloyee, 增加月薪字段, 提供构造方法, 重写计算工资的方法。定义销售人员类SalesEmployee , 增加底薪, 销售额等属性, 提供构造方法, 重写计算工资的方法,工资的计算方法是底薪+按销售额百分之十提成
****
**input:**
```
zjx 12 5000 10
lili 12 10 1000 50000
```
**output:**
```
SalariedEmployee{name='zjx',birthmonth=12,monthSalary=5000.0}
5200.0
5000.0
SalesEmployee{name='lili',birthmonth=12,monthSalary=1000.0,sales=50000.0}
6200.0
6000.0
```
