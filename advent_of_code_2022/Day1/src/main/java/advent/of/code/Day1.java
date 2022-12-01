package advent.of.code;


import lombok.AllArgsConstructor;
import lombok.Data;
import utilitar.Utlis;


import java.io.*;
import java.util.ArrayList;
import java.util.List;




@Data
@AllArgsConstructor
public class Day1 {

    List<String> date;
    List <Integer> integerList = new ArrayList <>();
    List<String> parts;

    public Day1(File input) {
        date = Utlis.fileToStringList(input);
    }
    public void run1(){
        int calorie = 0;
        int maxCalories = 0;
        for(String s : date){
            if(s.isBlank()){
                if(calorie > maxCalories){
                    maxCalories = calorie;
                }
                calorie = 0;
                continue;
            }
            calorie += Integer.parseInt(s);
        }
        if(calorie > maxCalories)
            maxCalories = calorie;
        System.out.println(maxCalories);
    }

    public void run2(){
        int calorie = 0;
        int maxCalories = 0;
        for(String s : date){
            if(s.isBlank()){
                if(calorie > maxCalories){
                    maxCalories = calorie;
                }
                integerList.add(calorie);
                calorie = 0;
                continue;
            }
            calorie += Integer.parseInt(s);
        }
        integerList.add(calorie);
        if(calorie > maxCalories)
            maxCalories = calorie;
        integerList.sort((a,b) -> (b - a));
        int sum = integerList.get(0) + integerList.get(1) + integerList.get(2);
        System.out.println(sum);
    }






}
