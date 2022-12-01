package advent.of.code;

import lombok.AllArgsConstructor;
import lombok.Data;
import utilitar.Utlis;


import java.io.File;
import java.util.List;




@Data
@AllArgsConstructor
public class Day1 {

    static List<Integer> nums;

    public Day1(File input) {
        nums = Utlis.inputFileToIntList(input);
    }

    public int run1() {
        int k = 0;
        for(int i = 1; i < nums.size() - 1; i++)
            if(nums.get(i) < nums.get(i+1))
                k = k + 1;

        if(nums.get(nums.size() - 2) < nums.get(nums.size() - 1))
            k = k + 1;
        return k;
    }


    public int run2(){
        int k = 0;
        for(int i = 0; i < nums.size() - 3; i++) {
            int sumA = nums.get(i) + nums.get(i + 1) + nums.get(i + 2);
            int sumB = nums.get(i + 1) + nums.get(i + 2) + nums.get(i + 3);

            if(sumB > sumA) {
                k++;
            }
        }
        return k;
    }


}
