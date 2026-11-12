import java.util.List;
import java.io.*;

public class Day2 {

    public int run1(String input){

        String[] inputSplit = input.split("x");
        int l = Integer.parseInt(inputSplit[0]);
        int w = Integer.parseInt(inputSplit[1]);
        int h = Integer.parseInt(inputSplit[2]);

        int bonus = Math.min(l*w,Math.min(w*h,h*l));
        return (2*l*w + 2*w*h + 2*h*l + l * w);
    }
    public int run2(String input){

        String[] inputSplit = input.split("x");
        int l = Integer.parseInt(inputSplit[0]);
        int w = Integer.parseInt(inputSplit[1]);
        int h = Integer.parseInt(inputSplit[2]);

        int p1 = l + w + l + w;
        int p2 = l + h + l + h;
        int p3 = w + h + w + h;

        int aria = l * w * h;

        return aria + Math.min(p1, Math.min(p2,p3));
    }
}
