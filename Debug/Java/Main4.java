// To count the number of vowels

package Debug.Java;

import java.util.HashMap;
import java.util.Map;

public class Main4 {
    public static Map<Character, Integer> countVowels(String string) {
        Map<Character, Integer> vowelCounts = new HashMap<>();
        String vowels = "aeiou";
        for (char c : string.toLowerCase().toCharArray()) {
            if (vowels.contains(String.valueOf(c))) {
                vowelCounts.put(c, vowelCounts.getOrDefault(c, 0));
            }
        }
        return vowelCounts;
    }

    public static void main(String[] args) {
        String inputString = "Hello World";
        Map<Character, Integer> vowelCounts = countVowels(inputString);
        System.out.println("Vowel counts: " + vowelCounts);
    }
}
