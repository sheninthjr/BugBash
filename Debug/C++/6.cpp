// Using Generator Function find the fibonacci series

#include <iostream>

class Main6
{
private:
    int n;

public:
    Main6(int n) : n(n) {}

    class Iterator
    {
    private:
        int count;
        int a;
        int b;

    public:
        Iterator() : count(0), a(0), b(1) {}

        bool hasNext()
        {
            return count < n;
        }

        int next()
        {
            int result = a;
            a = b;
            b = result;
            return result;
        }
    };

    Iterator iterator()
    {
        return Iterator();
    }
};

int main()
{
    int n = 10;
    Main6 generator(n);
    Main6::Iterator it = generator.iterator();
    while (it.hasNext())
    {
        std::cout << it.next() << " ";
    }
    return 0;
}
