// Program to determine if a given positive integer is even or odd.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Even/Odd Number Checker\n";
    int number;

    cout << "Enter Number : ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << number << " is Even Number.\n";
    }
    else
    {
        cout << number << " is Odd Number.\n";
    }

    return 0;
}