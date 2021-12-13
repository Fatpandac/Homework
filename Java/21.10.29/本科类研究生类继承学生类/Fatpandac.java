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

class Undergraduate extends Student {
    String specialty;

    public Undergraduate(String n1, int a1, String d1, String specialty) {
        super(n1, a1, d1);
        this.specialty = specialty;
    }

    public void Show() {
        super.Show();
        System.out.println("专业" + this.specialty);
    }
}

class Graduate extends Student {
    String direction;

    public Graduate(String n1, int a1, String d1, String direction) {
        super(n1, a1, d1);
        this.direction = direction;
    }

    public void Show() {
        super.Show();
        System.out.println("研究方向" + this.direction);
    }
}

public class Fatpandac {
    public static void main(String[] args) {
        Student student = new Student("张1", 20, "普通");
        Undergraduate undergraduate = new Undergraduate("陈定", 21,
                                                        "本科生", "计算机");
        Graduate graduate = new Graduate("李生", 26, "研究生", "信息管理");
        student.Show();
        undergraduate.Show();
        graduate.Show();
    }
}
