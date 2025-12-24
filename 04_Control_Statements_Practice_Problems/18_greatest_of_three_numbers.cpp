// Program to print the greatest among three given positive integers.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Greatest Number Finder\n";
    int num1, num2, num3;

    cout << "Enter 1st Number : ";
    cin >> num1;

    cout << "Enter 2nd Number : ";
    cin >> num2;

    cout << "Enter 3rd Number : ";
    cin >> num3;
    
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << num1 << " is Greatest Number.\n";
        }
        else
        {
            cout << num3 << " is Greatest Number.\n";
        }
    }

    else if (num2 > num1)
    {
        if (num2 > num3)
        {
            cout << num2 << " is Greatest Number.\n";
        }
        else
        {
            cout << num3 << " is Greatest Number.\n";
        }
    }

    else
    {
        if (num3 > num1)
        {
            cout << num3 << " is Greatest Number.\n";
        }
        else
        {
            cout << num1 << " is Greatest Number.\n";
        }
    }
    
    return 0;
}
