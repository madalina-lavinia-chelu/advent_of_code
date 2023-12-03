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
            System.out.println(calculateMaximumColorOccurrences(line));
            var parts = line.split(": ");
            var gameId=0;// = getNumberFromString(parts[0]);
            System.out.println(parts[0]);
            var colorCounts = calculateMaximumColorOccurrences(parts[1]);

            if (colorCounts.red <= 12 && colorCounts.green <= 13 && colorCounts.blue <= 14) {
                sum += gameId;
            }


        }
        return true;
    }

    public static int getNumberFromString(String s) {
        return Integer.parseInt(s.replaceAll("[^\\d-]+", ""));
    }


    public ColorCount calculateMaximumColorOccurrences(String game) {
        var sets = game.split("; ");
        var colorCounts = new ColorCount();

        for (var set: sets) {
            var colors = set.split(", ");

            for (var color: colors) {
                var colorParts = color.split(" ");
                var colorName = colorParts[1];
                var cubeCount// = Integer.parseInt(colorParts[0]);

                switch (colorName) {
                    case "red" -> colorCounts.red = Math.max(colorCounts.red, cubeCount);
                    case "green" -> colorCounts.green = Math.max(colorCounts.green, cubeCount);
                    case "blue" -> colorCounts.blue = Math.max(colorCounts.blue, cubeCount);
                }
            }
        }

        return colorCounts;
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
