public class Fatpandac {
    public static void main(String[] args) {
        for (int i = 100;i < 1000;i++) {
            int ones_place = i % 10;
            int tens_place = i / 10 % 10;
            int hundreds_place = i / 100 % 10;
            if (i == ones_place * ones_place * ones_place + tens_place * tens_place * tens_place + hundreds_place * hundreds_place * hundreds_place) {
                System.out.printf("%d ",i);
            }
        }
    }
}
