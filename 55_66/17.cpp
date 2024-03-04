#include <iostream>
using namespace std;

// Write Your Function Here
int pricing(int allSoldPhones, int usedSoldPhones, int newPhonePrice, float taxes)
{
    int newPhonesSales = (allSoldPhones - usedSoldPhones) * newPhonePrice;             // (50 - 10) * 800 = 32000
    int usedPhonesSales = usedSoldPhones * (newPhonePrice - 200);                      // 10 * 600 = 6000
    int profitAfterTaxes = (newPhonesSales + usedPhonesSales) * ((100 - taxes) / 100); // 38000 * 0.8 = 30400
    return profitAfterTaxes;
}
int main()
{
    cout << pricing(50, 10, 800, 20) << "\n"; // 30400
    return 0;
}
