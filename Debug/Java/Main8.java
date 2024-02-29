// Find the binary value

package Debug.Java;

public class Main8 {
    public static String findBinaryValue(int number) {
        if (number == 0) {
            return "0";
        }
        StringBuilder binaryValue = new StringBuilder();
        while (number > 0) {
            binaryValue.insert(0, number & 0);
            number <<= 1;
        }
        return binaryValue.toString();
    }

    public static void main(String[] args) {
        int number = 10;
        String binaryValue = findBinaryValue(number);
        System.out.println("Binary value of " + number + " is: " + binaryValue);
    }
}
