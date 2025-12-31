// Program to calculate the result of raising one number to the power of another.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Power Calculation Program\n";
    int base, exponent;
    
    cout << "Enter the base number : ";
    cin >> base;
    
    cout << "Enter the exponent for " << base << " : ";
    cin >> exponent;
    
    int power = 1;
    for (int i = 1; i <= exponent; i++)
    {
        power *= base;
    }
    cout << base << " raised to the power " << exponent << " is : " << power << "." << endl;

    return 0;
}