/*
** FileName: Fatpandac.java
** Author: Fatpandac
** Create: 2021/11/26
** Description: Create a abstract class named Role. employee and manager are 
**              the subclass of Role.
*/

abstract class Role{
    private String name;
    private int age;
    private String sex;

    public Role(){

    }

    public Role(int age){
        this.setAge(age);

    }

    public Role(String name)
    {
        this.setName(name);
    }

    public Role(int age, String name)
    {
        this(age);
        this.setName(name);
    }

    public Role(String name,int age,String sex){
        this.setName(name);
        this.setAge(age);
        this.setSex(sex);
    }

    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return this.age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getSex() {
        return this.sex;
    }

    public void setSex(String sex) {
        this.sex = sex;
    }

    public abstract void play();
}

class Employee extends Role{
    private double salary;
    private static String ID;

    public Employee(){

    }

    public Employee(String name,int age,String sex,double salary,String ID){
        super(name, age, sex);
        this.salary = salary;
        Employee.ID = ID;
    }

    public double getSalary() {
        return this.salary;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    public static String getID() {
        return ID;
    }

    public static void setID(String ID) {
        Employee.ID = ID;
    }

    @Override
    public void play(){
        System.out.println("员工编号：" + ID);
    }

    final void sing(){
        System.out.println("员工姓名："  + this.getName() +
                           " 员工年龄：" + this.getAge()  +
                           " 员工性别：" + this.getSex()  +
                           " 员工工资：" + this.getSalary());
    }
}

class Manager extends Employee{
    final String vehicle;
    public Manager(String name, int age, String sex, double salary, String ID,
                                String vehicle){
        super(name, age, sex, salary, ID);
        this.vehicle = "Fatpandac";
    }

    String getVehicle() {
        return this.vehicle;
    }
}

public class Fatpandac {
    public static void main(String[] args) {
        Employee employee = new Employee("HON",18,"Man",1000,"7");
        employee.play();
        employee.sing();
        Manager manager = new Manager("UOI",20,"Woman",1500,"3","");
        manager.play();
        manager.sing();
        System.out.println("车：" + manager.getVehicle());
    }
}
