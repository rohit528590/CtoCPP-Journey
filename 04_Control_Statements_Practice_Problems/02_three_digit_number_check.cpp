// Program to determine if a given positive integer is a three-digit number or not.
#include <iostream>
using namespace std;

int main()
{
    cout<<"Welcome to the Three Digit Number Checker!\n";
    int number;

    cout << "Enter the Number : ";
    cin >> number;

    if (number > 99 && number < 1000)
    {
        cout << "Yes, " << number << " is three digit Number\n";
    }
    else
    {
        cout << "No, " << number << " is not three digit Number\n";
    }

    return 0;
}