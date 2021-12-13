public class Fatpandac {
    public static void main(String[] args) {
        String sentence = "want you to know one thing";
        char[] content = sentence.toCharArray();
        int times = 0;
        for (char c : content) {
            if (c == 'n') {
                times++;
            }
        }
        System.out.println("字母n的出现次数：" + times);
    }
}
