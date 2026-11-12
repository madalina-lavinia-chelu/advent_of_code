import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class Utils {
    public static List <List <Integer>> fileToStringList(File file) {
        List <List <Integer>> content = new ArrayList<>();
        try {
            BufferedReader br = new BufferedReader(new FileReader(file));
            String line = "";
            while ((line = br.readLine()) != null) {
                content.add(line.chars()
                        .mapToObj(e -> Character.getNumericValue(e))
                        .toList());
            }
            br.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
        return content;
    }
}
