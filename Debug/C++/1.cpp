// Find whehter the given string is palindrome or not

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string isPalindrome(string str)
{
    string cleanString = str;
    reverse(cleanString.end(), cleanString.begin());
    return cleanString == str ? " is a palindrome." : " is not a palindrome.";
}

int main()
{
    string inputs[] = {"palindrome", "ala", "helle"};

    for (const string &inputString : inputs)
    {
        cout << "'" << inputString << "'" << isPalindrome(inputString) << endl;
    }

    return 0;
}
