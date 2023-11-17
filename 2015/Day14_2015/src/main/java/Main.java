import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) {
        String filePath = "2015/Day14_2015/src/main/resources/date.in";

        Day14 day14 = new Day14();
        int max = 0;
        //System.out.println(day14.timeCalculator("Dancer can fly 27 km/s for 5 seconds, but then must rest for 132 seconds."));

        try (BufferedReader br = new BufferedReader(new FileReader(filePath))) {
            String line = null;
            int numberOfLinesToRead = 9; // Set the number of lines you want to read

            // Read lines from the file
            for (int i = 0; i < numberOfLinesToRead && (line = br.readLine()) != null; i++) {
                if(day14.timeCalculator(line) > max)
                    max = day14.timeCalculator(line);
                //System.out.println(day14.timeCalculator(line));


            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        System.out.println(max); //2640
    }
}
