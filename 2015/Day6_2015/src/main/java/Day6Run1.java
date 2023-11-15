import java.util.Arrays;
import java.util.stream.IntStream;

public class Day6Run1 {
    String[] parts;
    int[] start;
    int[] end;
    public void splitInput(String instruction){
        parts = instruction.split(" ");

        start = Arrays.stream(parts[parts.length - 3].split(","))
                .mapToInt(Integer::parseInt)
                .toArray();
        end = Arrays.stream(parts[parts.length - 1].split(","))
                .mapToInt(Integer::parseInt)
                .toArray();
    }
    public void processInstruction(String instruction, int[][] lights) {



        splitInput(instruction);
        System.out.println(parts[1]);
        switch (parts[0]) {
            case "turn":
                IntStream.rangeClosed(start[0], end[0])
                        .forEach(x ->
                                IntStream.rangeClosed(start[1], end[1])
                                        .forEach(y -> lights[x][y] = parts[1].equals("on") ? 1 : 0)
                        );
                break;

            case "toggle":
                IntStream.rangeClosed(start[0], end[0])
                        .forEach(x ->
                                IntStream.rangeClosed(start[1], end[1])
                                        .forEach(y -> lights[x][y] = 1 - lights[x][y])
                        );
                break;
        }
    }
}
