import java.util.HashSet;
import java.util.Set;

public class Day3 {
    int x = 0;
    int y = 0;

    public int countHouses(String input){
        Set <String> visitedHouses = new HashSet <>();
        visitedHouses.add(x + "," + y);
        input.chars()
                .mapToObj(e -> (char)e)
                .forEach( e -> {
                    if(e == '>') {
                        x++;
                    }else if(e == '<') {
                        x--;
                    }else if(e =='^'){
                        y++;
                    }
                    else if(e == 'v')
                        y--;
                    visitedHouses.add(x + "," + y);

                });


        return visitedHouses.size();
    }
}
