public class Day20 {

    public int findLowestHouseNumber(int targetPresents, int numberPart){
        int houseNumber = 1;
        int totalPresents = 0;

        while (true){
            if(numberPart == 1) {
                totalPresents = numberPresents(houseNumber);
            }

            if(numberPart == 2){
                totalPresents = numberPresentsNewRules(houseNumber);
            }



            if(totalPresents >= targetPresents) {
                return houseNumber;
            }
            houseNumber++;
        }

    }

    public int numberPresents(int houseNumber){
        int totalPresents = 0;
        for(int i = 1; i*i <= houseNumber; i++){
            if(houseNumber % i == 0) {
                totalPresents += i * 10;
                if(i != houseNumber/i)
                    totalPresents += (houseNumber/i)* 10;
            }
        }
        return totalPresents;
    }

    public int numberPresentsNewRules(int houseNumber){
        int totalPresents = 0;

        for (int i = 1; i <= 50 && i * i <= houseNumber; i++) {
            if (houseNumber % i == 0) {

                totalPresents += i * 11;

                if (houseNumber / i != i && (houseNumber / i) * 11 <= 50) {
                    totalPresents += (houseNumber / i) * 11;
                }
            }
        }
        return totalPresents;
    }





}
