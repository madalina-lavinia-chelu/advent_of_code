import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.Arrays;

public class MainRun1 {
    public static void main(String[] args) {



        Day6Run1 day6Run1 = new Day6Run1();
        String filePath = "2015/Day6_2015/src/main/resources/date.txt";
        try (BufferedReader reader = new BufferedReader(new FileReader(filePath))) {
            int[][] lights = new int[1000][1000];
            System.out.println("Read the task number: ");

           reader.lines().forEach(line -> day6Run1.processInstruction(line, lights));

            long litLights = Arrays.stream(lights)
                    .flatMapToInt(Arrays::stream)
                    .filter(light -> light == 1)
                    .count();

            System.out.println("Number of lit lights: " + litLights);
            //reader.lines().forEach(System.out::println);
        } catch (IOException e) {
            e.printStackTrace();
        }

    }



}

