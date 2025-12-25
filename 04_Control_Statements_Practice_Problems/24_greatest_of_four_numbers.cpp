// Program to find the greatest among four numbers entered by the user using the max/min algorithm.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Greatest of Four Numbers Program\n";
    int num1, num2, num3, num4, max;

    cout << "Enter 1st Number : ";
    cin >> num1;

    cout << "Enter 2nd Number : ";
    cin >> num2;

    cout << "Enter 3rd Number : ";
    cin >> num3;

    cout << "Enter 4th Number : ";
    cin >> num4;

    max = num1;
    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    if (num4 > max)
    {
        max = num4;
    }
    cout << max << " is the Greatest Number." << endl;

    return 0;
}