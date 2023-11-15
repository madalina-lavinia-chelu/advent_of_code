import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class MainPart2 {

    public static void main(String[] args) {
        // Adjust the file path accordingly
        String filePath = "2015/Day5_2015/src/main/resources/date.txt";

        try {
            long niceStringsCount = Files.lines(Paths.get(filePath))
                    .filter(e -> hasRepeatingPair(e) && hasRepeatingWithOneBetween(e))
                    .count();

            System.out.println("Number of nice strings: " + niceStringsCount);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }



    private static boolean hasRepeatingPair(String input) {
        return java.util.stream.IntStream.range(0, input.length() - 1)
                .anyMatch(i -> input.indexOf(input.substring(i, i + 2), i + 2) != -1);
    }

    private static boolean hasRepeatingWithOneBetween(String input) {
        return java.util.stream.IntStream.range(0, input.length() - 2)
                .anyMatch(i -> input.charAt(i) == input.charAt(i + 2));
    }
}