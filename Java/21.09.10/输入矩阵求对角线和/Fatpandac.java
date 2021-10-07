/*
** FileName: Fatpandac.java
** Author: Fatpandac
** Create: 2021/10/07
** Description: Get sum of diagonal in matrix.
*/

import java.util.Scanner;

public class Fatpandac {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[][] matrix = new int[3][3];
        int diagonal_sum = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }
        scanner.close();
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.printf("%4d", matrix[i][j]);
            }
            System.out.printf("\n");
        }
        diagonal_sum = matrix[0][0] + matrix[1][1] + matrix[2][2];
        System.out.println(diagonal_sum);
    }
}
