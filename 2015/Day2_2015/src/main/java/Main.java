
import java.io.*;

public class Main {
    public static void main(String[] args) {

        Day2 day2 = new Day2();
        long  r1 = 0;
        long  r2 = 0;
        String filePath = "2015/Day2_2015/src/main/resources/date.txt"; // Replace with the actual path to your file

        try (BufferedReader br = new BufferedReader(new FileReader(filePath))) {
            String line = null;
            int numberOfLinesToRead = 1000; // Set the number of lines you want to read

            // Read lines from the file
            for (int i = 0; i < numberOfLinesToRead && (line = br.readLine()) != null; i++) {
                r1 += day2.run1(line);
                r2 += day2.run2(line);

            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        System.out.println(r1);
        System.out.println(r2);
    }

}

