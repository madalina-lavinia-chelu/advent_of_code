import java.io.File;
import java.sql.Array;
import java.util.*;

public class Day1 {
    static List <String> stringListInput;

    public Day1(File input) {
        stringListInput = Utlis.fileToStringList(input);
    }

    public boolean run1() {

        int sum = 0;
        for(String line : stringListInput){

            var parts = line.split(": ");
            var gameId=0;// = getNumberFromString(parts[0]);
            System.out.println(parts[0]);



        }
        return true;
    }

    public static int getNumberFromString(String s) {
        return Integer.parseInt(s.replaceAll("[^\\d-]+", ""));
    }




    private static class ColorCount {
        public int red = 0;
        public int green = 0;
        public int blue = 0;
    }

    public int run2(){

        return 0;
    }


}
