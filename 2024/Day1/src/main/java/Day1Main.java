import java.io.File;

public class Day1Main {
    public static void main(String[] args) {
        Day1Solution solution = new Day1Solution(new File("C:/Users/Lavinia/Desktop/advent_of_code/2024/Day1/src/main/resources/date.txt"));
        System.out.println("part1: " + solution.run1());
        System.out.println("part2: ");
        solution.run2();

    }
}
