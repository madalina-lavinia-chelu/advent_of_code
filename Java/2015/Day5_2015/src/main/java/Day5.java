import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class Day5 {


    private boolean containsForbiddenSubstring(String s) {
        return s.contains("ab") || s.contains("cd") || s.contains("pq") || s.contains("xy");
    }

    private  boolean hasDoubleLetter(String s) {
        return IntStream.range(0, s.length() - 1)
                .anyMatch(i -> s.charAt(i) == s.charAt(i + 1));
    }

    private boolean hasThreeVowels(String s) {
        long numarVocale = s.chars()
                .filter(c -> "aeiou".indexOf(c) != -1)
                .count();
        return numarVocale >= 3;
    }

    int run1(String s) {
        if(hasThreeVowels(s) && hasDoubleLetter(s) && !containsForbiddenSubstring(s))
            return 1;
        else
            return 0;
    }


   /* public int run1(String input){

        if(input.indexOf("ab")!=-1)
            System.out.println("ab");

        if( input.indexOf("cd")!=-1)
            System.out.println("cd");

        if(input.indexOf("pq")!=-1)
            System.out.println("pq");

        if(input.indexOf("xy")!=-1)
            System.out.println("xy");

        long countVowels = input.chars()
                .mapToObj(e -> (char) e)
                .filter(e -> "aeiou".indexOf(e) != -1)
                .count();
        boolean existaLitConsecutive = IntStream.range(0, input.length() - 1)
                .anyMatch(i -> input.charAt(i) == input.charAt(i+1));

        if(countVowels >= 3 && existaLitConsecutive)
            return 1;
        else
            return 0;


    }*/
}
