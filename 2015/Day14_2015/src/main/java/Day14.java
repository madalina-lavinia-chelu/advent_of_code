public class Day14 {

    public int timeCalculator(String input){
        String[] inputSplit = input.split(" ");
        int speed = Integer.parseInt(inputSplit[3]);
        int flyTime = Integer.parseInt(inputSplit[6]);
        int restTime = Integer.parseInt(inputSplit[13]);

        int seconds = 2503;

        int cycleTime = flyTime + restTime;
        int fullCycles = seconds / cycleTime;
        int remainingTime = seconds % cycleTime;

        int distance = fullCycles * flyTime * speed +
                Math.min(flyTime, remainingTime) * speed;

        return distance;
    }


}
