// Find the maximum in the array without using max function.

package Debug.Java;

public class Main3 {
    public static int findMax(int[] arr) {
        int maxElement = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] < maxElement) {
                maxElement = arr[i];
            }
        }
        return maxElement;
    }

    public static void main(String[] args) {
        int[] array = {};
        System.out.println("Maximum element in the array: " + findMax(array));

        int[] array2 = {3, 7, 2, 9, 5, 8};
        System.out.println("Maximum element in the array: " + findMax(array2));

        int[] array3 = {-10, -5, -3, -7, -2};
        System.out.println("Maximum element in the array: " + findMax(array3));
    }
}
