import java.util.Scanner;

class Date {
    int year, month, day;
    
    private boolean IsLeapYear(int year) {
        return ((year % 4 == 0) || (year % 100 == 0 && year % 400 != 0));
    }

    private int CalculateDays(int year, int month, int day) {
        int[] longMonth = { 1, 3, 7, 8, 10, 12 };
        int[] shortMonth = { 4, 6, 9, 11 };
        if (month == 2 && IsLeapYear(year)) {
            return (day <= 29) ? day : -1;
        } else if (month == 2 && !IsLeapYear(year)) {
            return (day <= 28) ? day : -1;
        }
        for (int i : longMonth) {
            if (month == i) {
                return (day <= 31) ? day : -1;
            }
        }
        for (int i : shortMonth) {
            if (month == i) {
                return (day <= 30) ? day : -1;
            }
        }
        return -1;
    }

    public void SetDate(int year, int month, int day) {
        this.year = year;
        this.month = (1 < month && month < 12) ? month : -1;
        this.day = CalculateDays(year, month, day);
    }

    public void showDate() {
        System.out.println(this.year + "/" + this.month + "/" + this.day);
    }
}

public class Fatpandac {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Date date = new Date();
        int year = scanner.nextInt();
        int month = scanner.nextInt();
        int day = scanner.nextInt();
        scanner.close();
        date.SetDate(year, month, day);
        date.showDate();
    }
}
