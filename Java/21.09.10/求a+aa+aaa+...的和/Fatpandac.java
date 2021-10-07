/*
** FileName: Fatpandac.c
** Author: Fatpandac
** Create: 2021/10/07
** Description: Get sum for the formula like "a + aa + aaa + ..."
*/

import java.util.Scanner;

public class Fatpandac {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int times = scanner.nextInt();
        int number = scanner.nextInt();
        scanner.close();
        int sum = 0,tmp = number;
        for (int i = 0; i < times; i++) {
            sum += tmp;
            tmp = tmp * 10 + number;
        }
        System.out.println(sum);
    }
}
