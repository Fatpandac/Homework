/*
** FileName: Fatpandac.java
** Author: Fatpandac
** Create: 2021/10/14
** Description: A class called Book, it have six available called id, name, price, num, press and author,
**              it have a constructor and a ShowBookInfo functions.
*/

import java.util.Scanner;

class Book {
    int id;
    String name;
    double price;
    int num;
    String press;
    String author;
    
    Book() {

    }

    Book(int id, String name, double price, int num, String press, String author) {
        this.id = id;
        this.name = name;
        this.price = price;
        this.num = num;
        this.press = press;
        this.author = author;
    }

    public void ShowBookInfo() {
        System.out.println("id:"       + this.id    +
                           "\nname:"   + this.name  +
                           "\nprice:"  + this.price +
                           "\nnum:"    + this.num   +
                           "\npress:"  + this.press +
                           "\nauthor:" + this.author);
    }
}

public class Fatpandac {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Book book1 = new Book(scanner.nextInt(), 
                              scanner.next(),
                              scanner.nextDouble(),
                              scanner.nextInt(),
                              scanner.next(),
                              scanner.next());
        Book book2 = new Book();
        scanner.close();
        book1.ShowBookInfo();
        book2.ShowBookInfo();
    }
}
