package advent.of.code;

import lombok.EqualsAndHashCode;
import lombok.ToString;
import utilitar.Utlis;

import java.io.File;
import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;

@ToString
@EqualsAndHashCode
public class Day2 {
    static List <String> data;

    public Day2(File input) {
        data = Utlis.fileToStringList(input);
    }
    public void run1(){


        Map <Boolean, List <String>> forward = data.stream()
                .collect(Collectors.partitioningBy(a -> a.equals("forward 5")));


        forward.entrySet().stream().forEach(System.out::println);

    }
}
