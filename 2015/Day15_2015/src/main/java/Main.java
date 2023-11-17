import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        Day15 day15 = new Day15();
        List <Ingredient> inputTotal = new ArrayList<>();
        String filePath = "2015/Day15_2015/src/main/resources/date.txt";

        try (BufferedReader br = new BufferedReader(new FileReader(filePath))) {
            String line = null;
            int numberOfLinesToRead = 4;

            // Read lines from the file
            for (int i = 0; i < numberOfLinesToRead && (line = br.readLine()) != null; i++) {

                String[] inputSplit = line.split(" ");
                String name  = inputSplit[0];
                int capacity  = Integer.parseInt(inputSplit[2]);
                int durability  = Integer.parseInt(inputSplit[5]);
                int flavor  = Integer.parseInt(inputSplit[8]);
                int texture   = Integer.parseInt(inputSplit[11]);
                int calories   = Integer.parseInt(inputSplit[14]);

                inputTotal.add(new Ingredient(name, capacity, durability, flavor, texture, calories));
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        //inputTotal.forEach(e -> e.forEach(System.out::println));
        System.out.println(day15.scorCookies(inputTotal));
    }
}
