#include <iostream>
using namespace std;

// Write Your Function Here
int books(int sBooks, int mBooks, int lBooks, int shelves)
{
    int sBooksAreaNeeded = sBooks * 2;
    int mBooksAreaNeeded = mBooks * 4;
    int lBooksAreaNeeded = lBooks * 6;
    int allBooksAreaNeeded = sBooksAreaNeeded + mBooksAreaNeeded + lBooksAreaNeeded;
    int shelvesArea = shelves * 20;
    if (allBooksAreaNeeded > shelvesArea)
    {
        return 0;
    }
    else
    {
        return shelvesArea - allBooksAreaNeeded;
    }
}

int main()
{
    cout << books(10, 4, 3, 4) << "\n"; // 26
    cout << books(10, 4, 3, 2) << "\n"; // 0
    return 0;
}
