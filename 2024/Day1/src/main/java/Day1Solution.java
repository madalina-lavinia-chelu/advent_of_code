import java.io.File;
import java.io.IOException;
import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import java.util.stream.Stream;

public class Day1Solution {
    List<Integer> numbers1 = new ArrayList<>();
    List<Integer> numbers2 = new ArrayList<>();

    Day1Solution(File input){
        inputFileToTwoNumbers(input);
    }

    public void inputFileToTwoNumbers(File inputFile) {

        try {
            Scanner sc = new Scanner(inputFile);
            while (sc.hasNextInt()) {
                numbers1.add(sc.nextInt());
                numbers2.add(sc.nextInt());
            }
            sc.close();
        } catch (IOException e) {
            e.printStackTrace();
        }

    }

    public int run1(){

        Collections.sort(numbers1);
        Collections.sort(numbers2);
        int sum = 0;

        //METODA 1
        /*for(int i = 0; i < numbers1.size(); i++){
                sum += Math.abs(numbers1.get(i) - numbers2.get(i));
        }*/

        //METODA2
        sum = IntStream.range(0, numbers1.size())
                .map(e -> Math.abs(numbers1.get(e) - numbers2.get(e)))
                .sum();
        return sum;

    }
    public void run2(){


        Integer sum = 0;

        //METODA 1

        Map <Integer, Integer> number1Map = new HashMap<>();
        for (int num : numbers1) {
            number1Map.put(num, number1Map.getOrDefault(num, 0) + 1);
        }

        // Pasul 2: Calcularea scorului de similaritate
        long similarityScore = 0;
        for (int num : numbers2) {
            if (number1Map.containsKey(num)) {
                similarityScore += (long) num * number1Map.get(num);
            }
        }
        System.out.println(similarityScore);

    }

}
