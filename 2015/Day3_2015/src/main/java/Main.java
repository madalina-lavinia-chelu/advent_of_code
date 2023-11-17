import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {

        String filePath = "2015/Day3_2015/src/main/resources/date.txt";
        Day3 day3 = new Day3();


        try(BufferedReader br = new BufferedReader( new FileReader(filePath) )){
            String myText = br.readLine();
            System.out.println(day3.countHouses(myText));


        }catch (IOException e){
            e.printStackTrace();
        }

    }
}
