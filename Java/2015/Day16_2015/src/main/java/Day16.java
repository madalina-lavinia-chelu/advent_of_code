import java.util.Map;

public class Day16 {
    public int machesTargetProperties(String line, Map <String, Integer> target){
        String[] tokens = line.split(" ");

        for (int i = 2; i < tokens.length; i += 2) {
            String property = tokens[i].substring(0, tokens[i].length() - 1);
            int value = Integer.parseInt(tokens[i + 1].replace(",", ""));
            if (target.containsKey(property) && target.get(property) != value) {
                return 0;
            }
        }
        return 1;


    }
}
