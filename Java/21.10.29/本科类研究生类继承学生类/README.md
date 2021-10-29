设计一个学生类Student，其数据成员有name(姓名)、age(年龄)和degree(学位)。由Student类派生出本科生类Undergraduate和研究生类Graduate，本科生类Undergraduate增加成员specialty(专业)，研究生类增加成员direction(研究方向)。每个类都有show()方法，用于输出数据成员信息
```Java
class Student {
	public String name;
	public int age;
	public String degree;

	public Student(String n1, int a1, String d1) // 构造方法
	{
		name = n1;
		age = a1;
		degree = d1;
	}
	public void Show() {
		System.out.print("学生、" + name + "   " + "年龄、" + age + "   " +
                         "学位、" + degree + '\n');
	}
}
```
****
**output:**
```
学生、张1   年龄、20   学位、普通
学生、陈定   年龄、21   学位、本科生
专业计算机
学生、李生   年龄、26   学位、研究生
研究方向信息管理
```
