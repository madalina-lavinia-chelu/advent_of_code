package advent.of.code.day3;

import lombok.AllArgsConstructor;
import lombok.Data;
import utilitar.Utlis;

import java.io.File;
import java.util.ArrayList;
import java.util.List;
@AllArgsConstructor
@Data
public class Day3 {
    List <String> date;


    public Day3(File input) {
        date = Utlis.fileToStringList(input);
    }
    public void run1(){
/*        String part1 = null;
        String part2 = null;
        for(String s : date){
            part1 = s.substring(0, (s.length()/2));
            part2 = s.substring(s.length()/2, s.length());

            System.out.print(part1 + " ");
            System.out.println(part2);
            

        }*/

        //date.stream().

    }
}
