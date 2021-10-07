/*
** FileName: Fatpandac.java
** Author: Fatpandac
** Create: 2021/10/07
** Description: Input and output your information.
*/

import java.util.Scanner;

public class Fatpandac {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Student you = new Student();
        you.set_name(scanner.next());
        you.set_student_id(scanner.next());
        you.set_age(scanner.nextInt());
        you.set_address(scanner.next());
        you.set_hobbies(scanner.next());
        scanner.close();
        you.output_info();
    }
}
class Student {
    String name;
    String student_id;
    int age;
    String address;
    String hobbies;
    public void set_name(String name){
        this.name = name;
    }
    public void set_student_id(String student_id){
        this.student_id = student_id;
    }
    public void set_age(int age){
        this.age = age;
    }
    public void set_address(String address){
        this.address = address;
    }
    public void set_hobbies(String hobbies){
        this.hobbies = hobbies;
    }
    public void output_info(){
        System.out.printf("%s\n%s\n%d\n%s\n%s",this.name,this.student_id,this.age,this.address,this.hobbies);
    }
}
