import java.util.Scanner;

public class Fatpandac{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Number num = new Number();
        num.set_number(scanner.nextInt());
        if (num.isDivisible()){
            System.out.printf("%d可以3、5、7整除",num.number);
        }
    }
}
class Number{
    int number;
    public void set_number(int number) {
        this.number = number;
    }
    boolean DivideByThree(){
        return (number % 3) == 0;
    }
    boolean DivideByFive(){
        return (number % 5) == 0;
    }
    boolean DivideBySeven(){
        return (number % 7) == 0;
    }
    public boolean isDivisible(){
        return DivideByThree() && DivideByFive() && DivideBySeven();
    }
}
