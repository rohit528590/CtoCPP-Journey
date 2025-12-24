// Program to determine if a given positive integer is divisible by 5 or 3 but not divisible by 15 using logical operators.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Divisibility Calculator\n";
    int num;

    cout << "Enter the Number : ";
    cin >> num;

    if ((num % 5 == 0 || num % 3 == 0) && num % 15 != 0)
    {
        if (num % 5 == 0)
        {
            cout << num << " is divisible by 5 but not divisible by 3.\n";
        }
        else
        {
            cout << num << " is divisible by 3 but not divisible by 5.\n";
        }
    }
    
    else
    {
        cout << num << " is either not divisible by 3 or 5 or it is divisible by 15.\n";
    }
    
    return 0;
}