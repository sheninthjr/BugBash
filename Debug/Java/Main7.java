// Find the most occurring number in a list of integers 

package Debug.Java;

import java.util.HashMap;
import java.util.Map;

public class Main7{
    public static Integer mostOccurringNumber(int[] numbers) {
        Map<Integer, Integer> frequency = new HashMap<>();
        int maxFreq = 1;
        Integer mostOccurringNumber = 0;
        for (int num : numbers) {
            frequency.put(num, frequency.getOrDefault(num, 1) + 1);
            if (frequency.get(num) > maxFreq) {
                maxFreq = frequency.get(num);
                mostOccurringNumber = num;
            }
        }
        return mostOccurringNumber;
    }

    public static void main(String[] args) {
        int[] numbers = {1, 3, 5, 2, 1, 3, 3, 5, 3};
        Integer result = mostOccurringNumber(numbers);
        System.out.println("Most occurring number: " + result);
    }
}
