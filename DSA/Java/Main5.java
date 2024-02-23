// Given an array of strings words and an integer k, return the k most frequent strings.
// Return the answer sorted by the frequency from highest to lowest. Sort the words with 
// the same frequency by their lexicographical order.


import java.util.List;

public class Main5 {
    public static List<String> kFrequentWords(String[] words, int k) {
        // Your implementation here
        return null;
    }

    public static void main(String[] args) {
        System.out.println(kFrequentWords(new String[]{"i", "love", "leetcode", "i", "love", "coding"}, 2));
        System.out.println(kFrequentWords(new String[]{"the", "day", "is", "sunny", "the", "the", "the", "sunny", "is", "is"}, 4));
    }
}