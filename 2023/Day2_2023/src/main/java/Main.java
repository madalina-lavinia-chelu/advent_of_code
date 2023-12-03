import java.io.File;

public class Main {
    public static void main(String[] args) {
        Day1 test = new Day1(new File("2023/Day2_2023/src/main/resources/date.txt"));

        System.out.println(test.run1());
        System.out.println(test.run2());
    }
}
