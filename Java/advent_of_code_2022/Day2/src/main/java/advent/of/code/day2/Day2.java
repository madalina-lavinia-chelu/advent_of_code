package advent.of.code.day2;

import advent.of.code.day2.utilitar.Utlis;
import jdk.jshell.execution.Util;

import java.io.File;
import java.util.ArrayList;
import java.util.List;

public class Day2 {

    List <String> date ;
    public Day2(File file){
        date = Utlis.fileToStringList(file);
    }

    public void run1(){
        String part1, part2;
        int sum = 0, bonus = 0, scor = 0;
        for(String e : date){
            part1 = e.substring(0,1);
            part2 = e.substring(2);
            if(part1.equals("A")) //adversar
            {
                if(part2.equals("X")){
                    scor = 3;
                    bonus = 1;
                }
                else if(part2.equals("Y")){
                    scor = 6;
                    bonus = 2;
                }
                else if(part2.equals("Z")){
                    scor = 0;
                    bonus = 3;
                }
            }
            else if(part1.equals("B"))
            {
                if(part2.equals("X")){
                    scor = 0;
                    bonus = 1;

                }
                else if(part2.equals("Y")){
                    scor = 3;
                    bonus = 2;
                }
                else if(part2.equals("Z")){
                    scor = 6;
                    bonus = 3;
                }
            }
            else if(part1.equals("C"))
            {
                if(part2.equals("X")){
                    scor = 6;
                    bonus = 1;

                }
                else if(part2.equals("Y")){
                    scor = 0;
                    bonus = 2;
                }
                else if(part2.equals("Z")){
                    scor = 3;
                    bonus = 3;
                }
            }

            sum = sum + scor + bonus;

        }
        System.out.println(sum);


    }

    public void run2(){
        String part1, part2;
        int sum = 0, bonus = 0, scor = 0;
        for(String e : date){
            part1 = e.substring(0,1);
            part2 = e.substring(2);
            if(part1.equals("A")) //adversar
            {
                if(part2.equals("X")){ // lose
                    scor = 0; //foarfeca
                    bonus = 3;
                }
                else if(part2.equals("Y")){ //draw
                    scor = 3; // stanca //------------
                    bonus = 1;
                }
                else if(part2.equals("Z")){ //win
                    scor = 6; //hartie
                    bonus = 2;
                }
            }
            else if(part1.equals("B"))
            {
                if(part2.equals("X")){ //lose
                    scor = 0; //stanca  --------------
                    bonus = 1;

                }
                else if(part2.equals("Y")){ //draw
                    scor = 3; // hartie
                    bonus = 2;
                }
                else if(part2.equals("Z")){ //win
                    scor = 6; // foarfeca
                    bonus = 3;
                }
            }
            else if(part1.equals("C"))
            {
                if(part2.equals("X")){ //lose
                    scor = 0; // hartie
                    bonus = 2;

                }
                else if(part2.equals("Y")){ //draw
                    scor = 3; // foarfeca
                    bonus = 3;
                }
                else if(part2.equals("Z")){ //win
                    scor = 6; // stanca ------------
                    bonus = 1;
                }
            }

            sum = sum + scor + bonus;

        }
        System.out.println(sum);


    }
}
