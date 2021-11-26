/*
** FileName: Fatpandac.java
** Author: Fatpandac
** Create: 2021/11/26
** Description: Create a abstract class named chouXiang. Rect and Triangle are 
**              the subclass of chouXiang.
*/

abstract class chouXiang {
    int length;
    int height;
    abstract int sd();
    abstract int area(int length,int height);
}
class Rect extends chouXiang{
    public int sd(){
        return 1;
    }

    public int area(int length,int height){
        return length * height;
    }

}

class Triangle extends chouXiang{
    public int sd(){
        return 2;
    }

    public int area(int length, int height){
        return (length*height)/2;
    }
}

public class Fatpandac {
    public static void main(String[] args) {
        Triangle triangle = new Triangle();
        System.out.println("Area of triangle: " + triangle.area(99,2));
        Rect rect = new Rect();
        System.out.println("Area of rect: " + rect.area(4,8));
    }
}
