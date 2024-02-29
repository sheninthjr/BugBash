// Find the maximum in the array without using max function.

#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int>& arr) {
    int maxElement = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    vector<int> array;
    cout << "Maximum element in the array: " << findMax(array) << endl;

    vector<int> array2 = {3, 7, 2, 9, 5, 8};
    cout << "Maximum element in the array: " << findMax(array2) << endl;

    vector<int> array3 = {-10, -5, -3, -7, -2};
    cout << "Maximum element in the array: " << findMax(array3) << endl;

    return 0;
}
