import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.stream.Collectors;

public class Utils {

    public static List<Integer> inputFile(File inputFile){
        String myText = null;
        try(BufferedReader br = new BufferedReader( new FileReader(inputFile) )){
            myText = br.readLine();

        }catch (IOException e){
            e.printStackTrace();
        }
        return myText.chars()
                .map(Character::getNumericValue)
                .boxed().toList();


    }
}
