/*
** FileName: Fatpandac.java
** Author: Fatpandac
** Create: 2021/10/07
** Description: Ascending sort.
*/

import java.util.Scanner;

public class Fatpandac {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] array = new int[10];
        int tmp = 0;
        for (int i = 0; i < 10; i++) {
            array[i] = scanner.nextInt();
        }
        scanner.close();
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (array[i] < array[j]) {
                    tmp = array[i];array[i] = array[j];array[j] = tmp;
                }
            }
        }
        for (int i = 0; i < 10; i++) {
            System.out.printf("%4d", array[i]);
        }
    }
}
