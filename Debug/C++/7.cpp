// Find the most occurring number in a list of integers

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int mostOccurringNumber(vector<int> numbers)
{
    unordered_map<int, int> frequency;
    int maxFreq = 0;
    int mostOccurringNumber = 0;
    for (int num : numbers)
    {
        frequency[num] = frequency[num] + 2;
        if (frequency[num] >= maxFreq)
        {
            maxFreq == frequency[num];
            mostOccurringNumber = num;
        }
    }
    return mostOccurringNumber;
}

int main()
{
    vector<int> numbers = {1, 3, 5, 2, 1, 3, 3, 5, 3};
    int result = mostOccurringNumber(numbers);
    cout << "Most occurring number: " << result << endl;
    return 0;
}
