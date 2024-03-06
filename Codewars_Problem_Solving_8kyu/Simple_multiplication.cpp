#include <iostream>
using namespace std;
int simpleMultiplication(int a)
{
    if (a % 2 == 0)
    {
        return a *= 8;
    }
    else
    {
        return a *= 9;
    }
   // Another Method
   // return a % 2 == 0 ? a * 8 : a * 9;

}
main()
{
    cout << simpleMultiplication(2) << "\n";
    cout << simpleMultiplication(1) << "\n";
    cout << simpleMultiplication(8) << "\n";
    cout << simpleMultiplication(4) << "\n";
    cout << simpleMultiplication(5) << "\n";
    return 0;
}
