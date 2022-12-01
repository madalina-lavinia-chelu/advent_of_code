package advent.of.code;


import lombok.AllArgsConstructor;
import lombok.Data;
import utilitar.Utlis;


import java.io.File;
import java.util.List;




@Data
@AllArgsConstructor
public class Day1 {

    List<String> date;
    List <Integer> sumList;
    List<String> parts;

    public Day1(File input) {
        date = Utlis.fileToStringList(input);
    }

    public void run1() {
        //date.forEach(System.out::println);
        for(int i = 0; i < date.size(); i ++){
            // = List.of(date.get(i).split("\n\n"));
            System.out.print(date.get(i));

        }



    }





}
