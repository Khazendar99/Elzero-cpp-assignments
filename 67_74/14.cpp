#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {5, 4, 3, 2, 1}; // 45321 // 43521 // 43251

    // Method One
    // reverse(nums.begin(), nums.end());
    // Method Two
    // sort(nums.begin(), nums.end());
    // Method Three -> Use Swap + Loop For Challenge
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (i == nums.size() - 2)
    //     {
    //         break;
    //     }
    //     swap(nums[i], nums[nums.size() - i - 1]);
    // }
    for (int i : nums)
    {
        cout << i << "\n";
    }

    return 0;
}

// Needed Output
// 1 2 3 4 5
