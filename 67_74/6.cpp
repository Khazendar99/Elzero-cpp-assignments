#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 10, 40, 50, 60, 10, 80};
    int check = 10;
    int countone = 0;
    int counttwo = 0;

    // Write Method One
    for (int i = 0; i < size(numbers); i++)
    {
        if (numbers[i] == check)
        {
            countone++;
        }
    }
    // Write Method Two
    for (int number : numbers)
    {
        if (number == check)
        {
            counttwo++;
        }
    }
    // for (numbers)
    cout << countone << "\n"; // 3
    cout << counttwo << "\n"; // 3
    // Another extra Method
    int countThree = count(numbers.begin(), numbers.end(), check);
    cout << countThree << "\n";
    return 0;
}
