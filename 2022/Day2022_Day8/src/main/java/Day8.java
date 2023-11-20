import java.io.File;
import java.util.List;
import java.util.stream.Collectors;

public class Day8 {
    public List<List <Integer>> treeInput;

    public Day8(File input){
        treeInput = Utils.fileToStringList(input);
    }
    public int run1(){
        int count = 0;

        for (int i = 0; i < treeInput.size(); i++) {
            for (int j = 0; j < treeInput.get(0).size(); j++) {
                if (isTreeVisible(i, j, treeInput.get(i).get(j))){
                    count++;
                }
            }
        }
        return count;
    }

    private boolean isTreeVisible(int row, int col, int currentTreeHeight) {
        int maxInRow = treeInput.get(row).stream().max(Integer::compare).orElse(0);
        int maxInCol = treeInput.stream().mapToInt(list -> list.get(col)).max().orElse(0);

        return currentTreeHeight > Math.max(maxInRow, maxInCol);
    }
}
