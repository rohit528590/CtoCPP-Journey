// Program to find the remainder when a dividend is divided by a divisor, using the modulus (%) operator.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Remainder Calculator!\n";
    int divisor, divided;

    cout << "Enter the Divided Number : ";
    cin >> divided;

    cout << "Enter the Divisor Number : ";
    cin >> divisor;
    
    cout << "When " << divided << " / " << divisor << " remainder will be " << divided % divisor << endl;
    return 0;
}