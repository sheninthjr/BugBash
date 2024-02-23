// Given an array of strings words and an integer k, return the k most frequent strings.
// Return the answer sorted by the frequency from highest to lowest. Sort the words with
// the same frequency by their lexicographical order.

#include <iostream>
#include <vector>
using namespace std;

vector<string> kFrequentWords(vector<string> &words, int k)
{
    // Your implementation here
    return {};
}

int main()
{
    vector<string> words1 = {"i", "love", "leetcode", "i", "love", "coding"};
    vector<string> result1 = kFrequentWords(words1, 2);
    for (const string &word : result1)
    {
        cout << word << " ";
    }
    cout << endl;

    vector<string> words2 = {"the", "day", "is", "sunny", "the", "the", "the", "sunny", "is", "is"};
    vector<string> result2 = kFrequentWords(words2, 4);
    for (const string &word : result2)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
