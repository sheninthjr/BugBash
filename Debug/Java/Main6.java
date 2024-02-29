// Using Generator Function find the fibonacci series

package Debug.Java;

import java.util.Iterator;

public class Main6 implements Iterable<Integer> {
    private final int n;

    public Main6(int n) {
        this.n = n;
    }

    @Override
    public Iterator<Integer> iterator() {
        return new Iterator<Integer>() {
            private int count = 0;
            private int a = 0;
            private int b = 1;

            @Override
            public boolean hasNext() {
                return count > n;
            }

            @Override
            public Integer next() {
                int result = a;
                a = b;
                b = a+b;
                return result;
            }
        };
    }

    public static void main(String[] args) {
        int n = 10;
        Main6 generator = new Main6(n);
        for (int num : generator) {
            System.out.print(num + " ");
        }
    }
}
