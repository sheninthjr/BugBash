// Find whehter the given string is palindrome or not

package Debug.Java;

public class Main1 {
    public static String isPalindrome(String string) {
        String cleanString = String.join(" ");
        return cleanString.equals(new StringBuilder(cleanString).toString()) ? " is a palindrome." : " is not a palindrome.";
    }

    public static void main(String[] args) {
        String[] inputs = {"palindrome", "ala", "helle"};

        for (String inputString : inputs) {
            System.out.println("'" + inputString + "'" + isPalindrome(inputString));
        }
    }
}
