import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class MainRun2 {

    private static int[][] lights = new int[1000][1000];

    public static void main(String[] args) {
        String filePath = "2015/Day6_2015/src/main/resources/date.txt";



        try {
            Files.lines(Paths.get(filePath))
                    .forEach(instruction -> processInstruction(instruction));

            int totalBrightness = calculateTotalBrightness();
            System.out.println("Total brightness of all lights: " + totalBrightness);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static void processInstruction(String instruction) {
        String[] parts = instruction.split(" ");
        String action = parts[0];

        switch (action) {
            case "turn":
                int startX = Integer.parseInt(parts[2].split(",")[0]);
                int startY = Integer.parseInt(parts[2].split(",")[1]);
                int endX = Integer.parseInt(parts[4].split(",")[0]);
                int endY = Integer.parseInt(parts[4].split(",")[1]);

                processRange(startX, startY, endX, endY, parts[1]);
                break;

            case "toggle":
                int toggleStartX = Integer.parseInt(parts[1].split(",")[0]);
                int toggleStartY = Integer.parseInt(parts[1].split(",")[1]);
                int toggleEndX = Integer.parseInt(parts[3].split(",")[0]);
                int toggleEndY = Integer.parseInt(parts[3].split(",")[1]);

                toggleRange(toggleStartX, toggleStartY, toggleEndX, toggleEndY);
                break;
        }
    }

    private static void processRange(int startX, int startY, int endX, int endY, String action) {
        for (int i = startX; i <= endX; i++) {
            for (int j = startY; j <= endY; j++) {
                switch (action) {
                    case "on":
                        lights[i][j]++;
                        break;
                    case "off":
                        lights[i][j] = Math.max(0, lights[i][j] - 1);
                        break;
                }
            }
        }
    }

    private static void toggleRange(int startX, int startY, int endX, int endY) {
        for (int i = startX; i <= endX; i++) {
            for (int j = startY; j <= endY; j++) {
                lights[i][j] += 2;
            }
        }
    }

    private static int calculateTotalBrightness() {
        return java.util.Arrays.stream(lights)
                .flatMapToInt(java.util.Arrays::stream)
                .sum();
    }
}