/*
** FileName: Fatpandac.java
** Author: Fatpandac
** Create: 2021/10/07
** Description: Get sum of "1 + 2! + 3! + ... + 10!"
*/

public class Fatpandac {
    public static void main(String[] args) {
        int sum = 0;
        for (int i = 1; i <= 10; i++) {
            int product = 1;
            for (int j = i; j > 0; j--) {
                product *= j;
            }
            sum += product;
        }
        System.out.println(sum);
    }
}
