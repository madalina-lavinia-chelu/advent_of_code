package advent.of.code;

import java.io.*;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

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
