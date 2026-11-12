import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class Utlis {
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
}
