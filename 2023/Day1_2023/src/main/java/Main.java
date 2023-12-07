import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public class Main {
    public static void main(String[] args) throws IOException {
        Day1 test = new Day1(new File("2023/Day1_2023/src/main/resources/date.txt"));

        //System.out.println(test.run1());
        //System.out.println(test.run2());
        var input = Path.of("2023/Day1_2023/src/main/resources/date.txt");
        var nums = new String[]{"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
         var value2 = Files.lines(input)
                .map(line -> {
                    for (int i = 0; i < nums.length; i++)
                        line = line.replaceAll(nums[i], nums[i] + (i + 1) + nums[i]);
                    return line.replaceAll("\\D", "");
                })
                .map(line -> "" + line.charAt(0) + line.charAt(line.length() - 1))
                .mapToInt(Integer::valueOf)
                        .peek(System.out::println)
                                .sum();
        System.out.println("Part 2: " + value2);
    }
}

