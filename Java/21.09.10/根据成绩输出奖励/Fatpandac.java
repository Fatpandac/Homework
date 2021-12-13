import java.util.Scanner;
import java.io.PrintStream;
import java.io.UnsupportedEncodingException;

public class Fatpandac {
    public static void main(String[] args) throws UnsupportedEncodingException {
        Scanner scanner = new Scanner(System.in, "UTF-8");
        PrintStream out = new PrintStream(System.out, true, "UTF-8");
        int score = scanner.nextInt();
        scanner.close();
        if (score == 100) {
            out.println("奖励一辆车");
        } else if (100 > score && score > 90) {
            out.println("奖励一台笔记本电脑");
        } else if (90 >= score && score >= 60) {
            out.println("奖励一部手机");
        } else {
            out.println("奖励一个面包");
        }
        switch (score/10) {
            case 10:
                out.println("奖励一辆车");
                break;
            case 9:
                out.println("奖励一台笔记本电脑");
                break;
            case 6:
                out.println("奖励一部手机");
                break;
            default:
                out.println("奖励一个面包");
                break;
        }
    }
}
