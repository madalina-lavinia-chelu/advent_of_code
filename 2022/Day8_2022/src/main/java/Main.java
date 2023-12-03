import java.io.File;

public class Main {
    public static void main(String[] args) {
        String filePath = "2022/Day2022_Day8/src/main/resources/date.txt";
        File file = new File(filePath);
        Day8 day1 = new Day8(file);
        System.out.println(day1.run1());
    }
}
