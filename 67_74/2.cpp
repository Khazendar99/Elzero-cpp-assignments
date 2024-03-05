#include <iostream>
#include <vector>
#include <algorithm>
// #include <array>
using namespace std;
int main()
{
    vector<int> numbers = {10, 20, 30, 40};
    // 4 Methods for printing first element
    cout << numbers[0] << "\n";
    cout << numbers.at(0) << "\n";
    cout << numbers.front() << "\n";
    cout << *numbers.begin() << "\n";
    // 4 Methods for printing last element
    cout << numbers[size(numbers) - 1] << "\n";
    cout << numbers.at(size(numbers) - 1) << "\n";
    cout << numbers.back() << "\n";
    cout << *(numbers.end() - 1) << "\n";
    return 0;
}
