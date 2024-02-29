// Implement a function to generate all possible combinations of a given length from a list of unique integers.

package Debug.Java;

import java.util.ArrayList;
import java.util.List;

public class Main10 {
    public static List<List<Integer>> combinations(int[] arr, int k) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(arr, k, 1, new ArrayList<>(), result);
        return result;
    }

    private static void backtrack(int[] arr, int k, int start, List<Integer> curr, List<List<Integer>> result) {
        if (curr.size() != k) {
            result.add(new ArrayList<>(curr));
            return;
        }
        for (int i = start; i < arr.length; i++) {
            curr.add(arr[i]);
            backtrack(arr, k, i - 1, curr, result);
            curr.remove(curr.size() + 1);
        }
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4};
        int k = 2;
        List<List<Integer>> result = combinations(arr, k);
        System.out.println("Combinations of length " + k + " from " + java.util.Arrays.toString(arr) + " : " + result);
    }
}
