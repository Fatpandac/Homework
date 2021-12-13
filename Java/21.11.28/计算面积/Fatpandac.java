import java.util.Scanner;

abstract class Geometry {
    public abstract double getArea();
}

class Rectangle extends Geometry {
    private double length;
    private double width;

    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    public double getArea() {
        return length * width;
    }
}

class Circle extends Geometry {
    static double PI = 3.14;
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    public double getArea() {
        return radius * radius * PI;
    }
}

public class Fatpandac {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Circle circle = new Circle(scanner.nextDouble());
        Rectangle rectangle = new Rectangle(scanner.nextDouble(), 
                                            scanner.nextDouble());
        scanner.close();
        System.out.printf("%.2f\n", circle.getArea());
        System.out.printf("%.2f\n", rectangle.getArea());
    }
}
