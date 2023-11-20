import java.io.File;

public class Main {
    public static void main(String[] args) {
        String filePath = "2017/Day1_2017/src/main/resources/date.txt";
        File file = new File(filePath);
        Day1 day1 = new Day1(file);
        System.out.println(day1.run1());
        System.out.println(day1.run2());
    }



}
