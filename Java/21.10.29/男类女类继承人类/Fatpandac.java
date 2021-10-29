/*
** FileName: Fatpandac.java
** Author: Fatpandac
** Create: 2021/10/29
** Description: Create a class called People then Boy and Girl extends it.
*/

import java.util.Scanner;

class People {
    String name;
    int age;

    People(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String Speak() {
        return "my name is " + this.name + ",I am " + this.age + " years old.";
    }
}

class Boy extends People {

    Boy(String name, int age) {
        super(name, age);
    }

    public String Speak() {
        return "I am a boy,I am " + this.age + " years old.";
    }
}

class Girl extends People {

    Girl(String name, int age) {
        super(name, age);
    }

    public String Speak() {
        return "I am a girl,my name is " + this.name + ".";
    }
}

public class Fatpandac {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        People people = new People(scanner.next(), scanner.nextInt());
        Boy tom = new Boy(scanner.next(), scanner.nextInt());
        Girl rose = new Girl(scanner.next(), scanner.nextInt());
        System.out.println(people.Speak());
        System.out.println(tom.Speak());
        System.out.println(rose.Speak());
        scanner.close();
    }
}
