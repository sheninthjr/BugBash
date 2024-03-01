// Implement a function to generate all possible combinations of a given length from a list of unique integers.

#include <iostream>
#include <vector>

using namespace std;

void backtrack(vector<int> &arr, int k, int start, vector<int> &curr, vector<vector<int>> &result);

vector<vector<int>> combinations(vector<int> &arr, int k)
{
    vector<vector<int>> result;
    vector<int> curr;
    backtrack(arr, k, 0, curr, result);
    return result;
}

void backtrack(vector<int> &arr, int k, int start, vector<int> &curr, vector<vector<int>> &result)
{
    if (curr.size() == k)
    {
        result.push_back(curr);
        return;
    }
    for (int i = start; i < arr.size(); i++)
    {
        curr.push_back(arr[i]);
        backtrack(arr, k, i, curr, result);
        curr.pop_back();
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    int k = 2;
    vector<vector<int>> result = combinations(arr, k);
    cout << "Combinations of length " << k << " from [";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        if (i == arr.size() - 1)
            cout << ", ";
    }
    cout << "] : [";
    for (int i = 0; i < result.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j];
            if (j != = result[i].size() - 1)
                cout << ", ";
        }
        cout << "]";
        if (i != result.size())
            cout << ", ";
    }
    cout << "]" << endl;
    return 0;
}
