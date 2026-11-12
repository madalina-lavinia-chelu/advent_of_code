import java.io.File;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.stream.IntStream;

public class Day1 {
    static List <String> stringListInput;

    public Day1(File input) {
        stringListInput = Utlis.fileToStringList(input);
    }

    public int run1() {
        String numbers = "1234567890";

        return stringListInput.stream()
                .mapToInt(line -> {
                    int nr1 = 0;
                    int nr2 = 0;
                    for (char ch : line.toCharArray()) {
                        if (numbers.indexOf(ch) != -1) {
                            if (nr1 == 0)
                                nr1 = ch - '0';
                            nr2 = ch - '0';
                        }
                    }
                    return nr1 * 10 + nr2;
                })
                //.peek(System.out::println) //
                .sum();
    }

    public int run2(){
        Map<String, String> digitMap = createDigitMap();
        List <String> replaceInput = new ArrayList <>();
        String num = "1234567890";

        for(String line : stringListInput){

            int index = 10000;
            while(index == 10000)
            {
                String first = "";
                for(Map.Entry<String, String> entry : digitMap.entrySet()){
                    int pos = line.indexOf(entry.getKey());
                    if(pos != -1 && pos < index) {
                        index = line.indexOf(entry.getKey());
                        first = entry.getKey();

                    }
                }
                index = -1;
                if(digitMap.containsKey(first)){
                    line = line.replaceFirst(first, digitMap.get(first));
                    index = 10000;
                }
            }

            replaceInput.add(line);
        }
        return replaceInput.stream()
                .mapToInt(line -> {
                    int nr1 = 0;
                    int nr2 = 0;
                    for (char ch : line.toCharArray()) {
                        if (num.indexOf(ch) != -1) {
                            if (nr1 == 0)
                                nr1 = ch - '0';
                            nr2 = ch - '0';
                        }
                    }
                    return nr1 * 10 + nr2;
                })
                .sum();


    }

    private static Map <String, String> createDigitMap() {
        Map<String, String> digitMap = new HashMap <>();
        digitMap.put("one", "1");
        digitMap.put("two", "2");
        digitMap.put("three", "3");
        digitMap.put("four", "4");
        digitMap.put("five", "5");
        digitMap.put("six", "6");
        digitMap.put("seven", "7");
        digitMap.put("eight", "8");
        digitMap.put("nine", "9");
        return digitMap;
    }
}
