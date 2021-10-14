/*
** FileName: Fatpanda.java
** Author: Fatpandac
** Create: 2021/10/14
** Description: one class called Student, it have two variables called name and score.
**              Other class called Score, it have two variables called course and grade
**              and have two functions called setData and getResult.
*/

class Score {
    String course;
    int grade;

    Score(String course, int grade) {
        this.course = course;
        this.grade = grade;
    }
}

class Student {
    String name;
    Score score;

    public void setData(String name, Score score) {
        this.name = name;
        this.score = score;
    }

    public void getResult() {
        System.out.println("Courese:"   + this.score.course +
                           "\nGrade:"   + this.score.grade  );
    }
}

public class Fatpandac {
    public static void main(String[] args) {
        Student student = new Student();
        student.setData("Fatpandac",new Score("java", 100));
        student.getResult();
    }
}
