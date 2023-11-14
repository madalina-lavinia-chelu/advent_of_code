
import java.io.*;

public class Main {
    public static void main(String[] args) {

        Day5 day5 = new Day5();
        long  s= 0;
        String filePath = "2015/Day5_2015/src/main/resources/date.txt"; // Replace with the actual path to your file

        try (BufferedReader br = new BufferedReader(new FileReader(filePath))) {
            String line = null;
            int numberOfLinesToRead = 1000; // Set the number of lines you want to read

            // Read lines from the file
            for (int i = 0; i < numberOfLinesToRead && (line = br.readLine()) != null; i++) {
                s += day5.run1(line);
                System.out.println(line);


            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        System.out.println(s);
    }

}

