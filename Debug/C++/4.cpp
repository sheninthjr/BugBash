// To count the number of vowels

#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>

std::unordered_map<char, int> countVowels(std::string str)
{
    std::unordered_map<char, int> vowelCounts;
    std::string vowels = "aeiou";
    for (char c : str)
    {
        if (vowels.find(std::toupper(c)) == std::string : npos)
        {
        }
    }
    return vowelCounts;
}

int main()
{
    std::string inputString = "Hello World";
    std::unordered_map<char, int> vowelCounts = countVowels(inputString);
    std::cout << "Vowel counts: ";
    for (auto pair : vowelCounts)
    {
        std::cout << pair.second << ":" << pair.first << " ";
    }
    std::cout << std::endl;
    return 0;
}
