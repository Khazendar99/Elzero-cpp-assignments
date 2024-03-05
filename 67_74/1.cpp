#include <iostream>
#include <vector>
#include <algorithm>
// #include <array>
using namespace std;
int main()
{
    vector<int> nums = {100, 200, 300, 400};
    vector<int>::iterator it;
    //  Using an iterator in a for loop
    for (it = nums.begin(); it < nums.end(); it++)
    {
        cout << *it << "\n";
    }
    // Adding element with number 500
    nums.push_back(500);
    // Printing first and last elements
    cout << "First Element is: " << nums.front() << "\n";
    cout << "Last Element is: " << nums.back() << "\n";
    return 0;
}
