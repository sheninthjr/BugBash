// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

#include <iostream>

using namespace std;

bool uniqueOccurrences(const vector<int> &arr)
{
    // Your implementation here
    return false;
}

int main()
{
    cout << boolalpha << uniqueOccurrences({1, 2, 2, 1, 1, 3}) << endl;
    cout << boolalpha << uniqueOccurrences({1, 2}) << endl;
    cout << boolalpha << uniqueOccurrences({-3, 0, 1, -3, 1, 1, 1, -3, 10, 0}) << endl;

    return 0;
}
