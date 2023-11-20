import lombok.AllArgsConstructor;
import lombok.Data;

import java.io.File;
import java.util.List;

@Data
@AllArgsConstructor
public class Day1 {

    public List <Integer> inputNumbers;
    public Day1(File inputFile){
        inputNumbers = Utils.inputFile(inputFile);
    }
    public int run1(){
        int sum = 0;
        for(int i = 0; i < inputNumbers.size() - 1; i++)
        {
            if(inputNumbers.get(i) == inputNumbers.get(i+1)) {
                sum += inputNumbers.get(i+1);
            }

        }
        if(inputNumbers.get(inputNumbers.size()-1) == inputNumbers.get(0)) {
            sum += inputNumbers.get(0);
        }
        return sum;
    }

    public int run2(){
        int sum = 0;
        for(int i = 0; i < inputNumbers.size()/2 ; i++)
        {
            if (inputNumbers.get(i) == inputNumbers.get(inputNumbers.size() / 2 + i)) {
                sum += inputNumbers.get(i) + inputNumbers.get(inputNumbers.size() / 2 + i);
            }

        }

        return sum;

    }

}
