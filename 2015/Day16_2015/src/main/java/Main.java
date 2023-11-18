import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Main {
    public static void main(String[] args) {

        Day16 day16 = new Day16();
        int counter = 0;
        String filePath = "2015/Day16_2015/src/main/resources/date.in";
        Map <String, Integer> targetProperties = new HashMap <>();
        targetProperties.put("children", 3);
        targetProperties.put("cats", 7);
        targetProperties.put("samoyeds", 2);
        targetProperties.put("pomeranians", 3);
        targetProperties.put("akitas", 0);
        targetProperties.put("vizslas", 0);
        targetProperties.put("goldfish", 5);
        targetProperties.put("trees", 3);
        targetProperties.put("cars", 2);
        targetProperties.put("perfumes", 1);


        try (BufferedReader br = new BufferedReader(new FileReader(filePath))) {
            String line;

            while ((line = br.readLine()) != null) {

                counter += day16.machesTargetProperties(line, targetProperties);
                if ( day16.machesTargetProperties(line, targetProperties) != 0) {
                    int auntNumber = getAuntNumber(line);
                    System.out.println("The gift is from Aunt Sue " + auntNumber);
                    //break;
                }

            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        System.out.println(counter);


    }
    private static int getAuntNumber(String line) {
        return Integer.parseInt(line.split(" ")[1].substring(0, line.split(" ")[1].length() - 1));
    }
}
