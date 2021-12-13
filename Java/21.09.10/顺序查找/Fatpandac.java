import java.util.Scanner;

public class Fatpandac {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] array = new int[10];
        int search_number = 0;
        for (int i = 0; i < 10; i++) {
            array[i] = scanner.nextInt();
        }
        search_number = scanner.nextInt();
        scanner.close();
        for (int i = 0; i < 10; i++) {
            if (array[i] == search_number) {
                System.out.println(i + 1);
                return;
            }
        }
        System.out.println("search false");
    }
}
