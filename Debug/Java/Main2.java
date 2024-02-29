// Code to print a pyramid pattern of stars with 5 rows

package Debug.Java;

public class Main2 {
    public static void printPyramid(int rows) {
        for (int i = 0; i < rows; i++) {
            System.out.print("".repeat(rows - 1));
            System.out.println("*".repeat(2 * i + 1)); 
        }
    }

    public static void main(String[] args) {
        int rows = 5;
        printPyramid(rows);
    }
}
