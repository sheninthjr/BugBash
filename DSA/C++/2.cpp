// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int> &nums)
{
    // Your implementation here
}

int main()
{
    vector<int> nums1 = {0, 1, 0, 3, 12};
    moveZeros(nums1);
    for (int num : nums1)
    {
        cout << num << " ";
    }
    cout << endl;

    vector<int> nums2 = {0};
    moveZeros(nums2);
    for (int num : nums2)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
