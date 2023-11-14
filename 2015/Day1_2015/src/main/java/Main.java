

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {


        //InputStream is = ctx.getResources().openRawResource(res_id);

        FileReader positionReader  = new FileReader("2015/Day1_2015/src/main/resources/date.txt" );
        BufferedReader br = new BufferedReader( positionReader );
        String myText = br.readLine();

        Day1 p = new Day1();
        System.out.println(p.run1(myText));
        System.out.println(p.run2(myText));
    }
}
