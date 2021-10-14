/*
** FileName: Fatpandac.java
** Author: Fatpandac
** Create: 2021/10/14
** Description: A class called Dog, it have three available called name, color, age
**              and a constructor and a ShowDogInfo function.
*/

class Dog {
    String name;
    String color;
    int age;

    Dog(String name, String color, int age) {
        this.name = name;
        this.color = color;
        this.age = age;
    }

    public void ShowDogInfo() {
        System.out.println("狗的姓名："   + this.name  +
                           "，狗的颜色：" + this.color + 
                           "，够的年龄：" + this.age   );
    }
}

public class Fatpandac {
    public static void main(String[] args) {
        Dog dog = new Dog("金毛", "金黄色", 3);
        dog.ShowDogInfo();
    }
}
