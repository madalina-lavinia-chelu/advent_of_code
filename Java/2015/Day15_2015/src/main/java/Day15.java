import java.util.List;

public class Day15 {

    public int scorCookies(List<Ingredient> ingredients) {
        int teaspoons = 100;
        int maxScore = 0;

        for (int i = 0; i <= teaspoons; i++) {
            for (int j = 0; j <= teaspoons - i; j++) {
                for (int k = 0; k <= teaspoons - i - j; k++) {
                    int l = teaspoons - i - j - k;

                    int capacity = Math.max(0, i * ingredients.get(0).capacity + j * ingredients.get(1).capacity + k * ingredients.get(2).capacity + l * ingredients.get(3).capacity);
                    int durability = Math.max(0, i * ingredients.get(0).durability + j * ingredients.get(1).durability + k * ingredients.get(2).durability + l * ingredients.get(3).durability);
                    int flavor = Math.max(0, i * ingredients.get(0).flavor + j * ingredients.get(1).flavor + k * ingredients.get(2).flavor + l * ingredients.get(3).flavor);
                    int texture = Math.max(0, i * ingredients.get(0).texture + j * ingredients.get(1).texture + k * ingredients.get(2).texture + l * ingredients.get(3).texture);
                    int calories = Math.max(0, i * ingredients.get(0).calories + j * ingredients.get(1).calories + k * ingredients.get(2).calories + l * ingredients.get(3).calories);


                    int score = capacity * durability * flavor * texture;

                    /*if(calories == 500)  //  for part two
                        maxScore = Math.max(maxScore, score);*/
                }
            }
        }
        return maxScore;
    }






}
