import java.util.Scanner;
import java.util.Arrays;

interface Average{
    public double caculateAverage();
}

class Singer implements Average{
    private int[] scores;

    Singer(int score1, int score2, int score3, int score4, int score5){
        scores = new int[5];
        scores[0] = score1;
        scores[1] = score2;
        scores[2] = score3;
        scores[3] = score4;
        scores[4] = score5;
    }

    public double caculateAverage(){
        Arrays.sort(scores);
        int sum = 0;
        for (int i = 1; i < scores.length - 1; i++) {
            sum += scores[i];
        }
        return sum / (scores.length - 2);
    }
}

class Score implements Average{
    private int math;
    private int english;
    private int chinese;

    Score(int math, int english, int chinese){
        this.math = math;
        this.english = english;
        this.chinese = chinese;
    }

    public double caculateAverage(){
        return (math + english + chinese) / 3.0;
    }
}

public class Fatpandac{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        Singer singer = new Singer(scanner.nextInt(), scanner.nextInt(), 
                                   scanner.nextInt(), scanner.nextInt(),
                                   scanner.nextInt());
        Score score = new Score(scanner.nextInt(), scanner.nextInt(), 
                                scanner.nextInt());
        scanner.close();
        System.out.printf("%.2f\n", singer.caculateAverage());
        System.out.printf("%.2f\n", score.caculateAverage());
    }
}
