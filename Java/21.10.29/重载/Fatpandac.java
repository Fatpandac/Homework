import java.util.Scanner;

public class Fatpandac {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Calculator calculator = new Calculator();
        System.out.println(calculator.add(scanner.nextInt(), scanner.nextInt()));
        System.out.printf("%.2f\n", calculator.add(scanner.nextDouble(), scanner.nextDouble()));
        System.out.println(calculator.add(scanner.nextBoolean(), scanner.nextBoolean()));
        System.out.println(calculator.add(scanner.next(), scanner.next()));
        scanner.close();
    }
}

class Calculator {
    public int add(int number1, int number2) {
        return number1 + number2;
    }

    public double add(double double1, double double2) {
        return double1 + double2;
    }

    public boolean add(boolean bool1, boolean bool2) {
        return bool1 && bool2;
    }

    public String add(String str1, String str2) {
        return str1 + " " + str2;
    }
 }
