public class NewMinHouseNumber {

    public static void main(String[] args) {
        // Puzzle input
        int targetPresentsInput = 36000000;

        int result = findLowestHouseNumber(targetPresentsInput);

        System.out.println("The new lowest house number is: " + result);
    }

    private static int findLowestHouseNumber(int targetPresents) {
        int houseNumber = 1;

        while (true) {
            // Calculate the total presents for the current house
            int totalPresents = calculateTotalPresents(houseNumber);

            // Check if the total presents meet the target
            if (totalPresents >= targetPresents) {
                return houseNumber;
            }

            houseNumber++;
        }
    }

    private static int calculateTotalPresents(int houseNumber) {
        int totalPresents = 0;

        for (int elf = 1; elf <= 50 && elf * elf <= houseNumber; elf++) {
            if (houseNumber % elf == 0) {
                // Each Elf delivers presents equal to eleven times their number
                totalPresents += elf * 11;
                int otherElf = houseNumber / elf;
                if (otherElf != elf && otherElf * 11 <= 50) {
                    totalPresents += otherElf * 11;
                }
            }
        }

        return totalPresents;
    }
}
