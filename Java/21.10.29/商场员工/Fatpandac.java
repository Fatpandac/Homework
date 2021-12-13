import java.util.Scanner;

class Employee {
    String name;
    int birthdayMonth;
    public Employee(String name, int birthdayMonth) {
        this.name = name;
        this.birthdayMonth = birthdayMonth;
    }
    public double getSalary(int month) {
        return (this.birthdayMonth == month) ? 200 : 0;
    }
    public int getBirthdayMonth() {
        return this.birthdayMonth;
    }
}

class SalariedEmployee extends Employee {
    double monthSalary;
    int payMonth;
    public SalariedEmployee(String name, int birthdayMonth, double monthSalary, int payMonth) {
        super(name, birthdayMonth);
        this.payMonth = payMonth;
        this.monthSalary = monthSalary;
    }
    public void ShowInfo() {
        System.out.printf("SalariedEmployee{name='%s',birthmonth=%d,monthSalary=%.1f}\n",this.name,this.birthdayMonth,this.monthSalary);
    }
    public double getSalary(int month) {
        return (this.monthSalary + ((this.birthdayMonth == month) ? 200.0f : 0.0f));
    }
}

class SalaryEmployee extends SalariedEmployee {
    double sales;
    public SalaryEmployee(String name, int birthdayMonth, int payMonth, double monthlySalary, double sales) {
        super(name, birthdayMonth, monthlySalary, payMonth);
        this.sales = sales;
    }
    public void ShowInfo() {
        System.out.printf("SalesEmployee{name='%s',birthmonth=%d,monthSalary=%.1f,sales=%.1f}\n",this.name,this.birthdayMonth,this.monthSalary,this.sales);
    }
    public double getSalary(int month) {
        return (this.monthSalary + (this.sales * 0.1) + ((this.birthdayMonth == month) ? 200.0f : 0.0f));
    }
}
public class Fatpandac {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        SalariedEmployee salariedEmployee = new SalariedEmployee(scanner.next(), scanner.nextInt(), scanner.nextDouble(), scanner.nextInt());
        SalaryEmployee salaryEmployee = new SalaryEmployee(scanner.next(), scanner.nextInt(), scanner.nextInt(), scanner.nextDouble(), scanner.nextDouble());
        scanner.close();
        salariedEmployee.ShowInfo();
        System.out.println(salariedEmployee.getSalary(salariedEmployee.getBirthdayMonth()));
        System.out.println(salariedEmployee.getSalary(salariedEmployee.getBirthdayMonth() - 1));
        salaryEmployee.ShowInfo();
        System.out.println(salaryEmployee.getSalary(salaryEmployee.getBirthdayMonth()));
        System.out.println(salaryEmployee.getSalary(salaryEmployee.getBirthdayMonth() - 1));
    }
}
