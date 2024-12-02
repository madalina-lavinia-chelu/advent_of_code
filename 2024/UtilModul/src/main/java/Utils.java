import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class Utils {
    public static List <String> fileToStringList(File file) {
        List<String> content = new ArrayList <>();
        try {
            BufferedReader br = new BufferedReader(new FileReader(file));
            String line = "";
            while ((line = br.readLine()) != null) {
                content.add(line);
            }
            br.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
        return content;
    }
    public static List<Integer> inputFileToIntList(File inputFile) {
        List<Integer> numbers = new ArrayList<>();
        try {
            Scanner sc = new Scanner(inputFile);
            while (sc.hasNextInt()) {
                numbers.add(sc.nextInt());
            }
            sc.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
        return numbers;
    }


}