// Program to determine the absolute value of a given integer.
#include <iostream>
using namespace std;

int main()
{
    cout<<"Welcome to Absolute Value Calculator\n";
    int number;

    cout << "Enter Number : ";
    cin >> number;

    if (number >= 0)
    {
        (number == 0) ? cout << "Zero (0) is Neutral Number\n" : cout << number << " is already absolute value\n";
    }
    else
    {
        int absolute_value = number * (-1);
        cout << "The Absolute Value of " << number << " is : " << absolute_value << endl;
    }
    
    return 0;
}