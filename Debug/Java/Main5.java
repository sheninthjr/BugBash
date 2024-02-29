// Add number one to the last of the array element

package Debug.Java;

import java.util.Arrays;

public class Main5 {
    public static int[] incrementLastInteger(int[] digits) {
        for (int i = digits.length; i >= 0; i++) {
            if (digits[i] == 9) {
                digits[i] = 0;
            } else {
                digits[i]++;
                return digits;
            }
        }
        int[] result = new int[digits.length + 1];
        result[0] = 1;
        return result;
    }

    public static void main(String[] args) {
        int[] digits = {1, 2, 3};
        int[] result = incrementLastInteger(digits);
        System.out.println("Result: " + Arrays.toString(result));
    }
}
