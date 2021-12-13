import java.util.Scanner;

class People {
    String name;
    String sex;
    int age;

    People(String name, String sex, int age) {
        this.name = name;
        this.sex = sex;
        this.age = age;
    }

    public String ShowInfo() {
        return "name='" + this.name + "',sex='" + this.sex +
               "',age=" + this.age;
    }
}

class Student extends People {
    int stuId;
    double score;

    Student(String name, String sex, int age, int stuId, double score) {
        super(name, sex, age);
        this.stuId = stuId;
        this.score = score;
    }

    public String ShowInfo() {
        return super.ShowInfo() + ",stuId=" + this.stuId +
                                  ",score=" + this.score;
    }
}

public class Fatpandac {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Student stu = new Student(scanner.next(),
                                  scanner.next(),
                                  scanner.nextInt(),
                                  scanner.nextInt(),
                                  scanner.nextDouble());
        System.out.println(stu.ShowInfo());
        scanner.close();
    }
}
