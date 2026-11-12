import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Read the number: ");
        String input = sc.nextLine();


        String resultPart1= input;
        String resultPart2= input;
        for (int i = 0; i < 50; i++) {
            if(i < 40)
                resultPart1 = firstStep(resultPart1);
            resultPart2 = firstStep(resultPart2);
        }
        System.out.println(resultPart1.length() + " " + resultPart2.length());


    }

    private static String firstStep(String input){
        StringBuilder result = new StringBuilder();
        int x = 0;
        int count = 1;


        char currentDigit = input.charAt(0);
        for(int i = 1; i < input.length();i++){
            char currentChar = input.charAt(i);
            if (input.charAt(i) == currentDigit) {
                count++;
            } else {

                result.append(count).append(currentDigit);
                currentDigit = input.charAt(i);
                count = 1;
            }

        }
        result.append(count).append(currentDigit);
        return result.toString();
    }

}
