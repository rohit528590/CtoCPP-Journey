// Program to find the remainder when a dividend is divided by a divisor, without using the modulus (%) operator.
// Formula : Remainder = Dividend - (Dividend / Divisor) * Divisor
#include <iostream>
using namespace std;

int main()
{
    cout<<"Welcome to the Remainder Calculator!\n";
    int divisor, divided;

    cout << "Enter the Divided Number : ";
    cin >> divided;

    cout << "Enter the Divisor Number : ";
    cin >> divisor;

    int remainder = divided - (divided / divisor) * divisor;
    cout << "When " << divided << " / " << divisor << " remainder will be " << remainder << endl;
    
    return 0;
}