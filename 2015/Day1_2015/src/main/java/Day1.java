import lombok.AllArgsConstructor;
import lombok.Data;


import java.util.List;
import java.util.stream.Collectors;


@Data
@AllArgsConstructor
public class Day1 {

    public int run1(String inputString) {
        int k = 0;
        List <Character> collect = inputString.chars()
                .mapToObj(e -> (char) e).toList();


        for (char c : collect) {

            if (c == '(') {
                k++;
            } else if (c == ')') {
                k--;
            }
        }


        return k;


    }

    public int run2(String inputString) {
        int k = 0;
        int poz = 0;
        List <Character> collect = inputString.chars()
                .mapToObj(e -> (char) e).toList();


        for (char c : collect) {

            poz++;
            if (c == '(') {
                k++;
            } else if (c == ')') {
                k--;
            }
            if(k < 0)
                return poz;
        }


        return poz;


    }
}

