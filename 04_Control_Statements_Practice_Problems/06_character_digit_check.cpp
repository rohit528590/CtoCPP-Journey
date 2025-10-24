// Program to check if a given character is a digit.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Character Digit Checker\n";
    char ch;

    cout << "Enter the Character : ";
    cin >> ch;

    if (ch >= '0' && ch <= '9')
    {
        cout << "Yes, " << ch << " is a Digit\n";
    }
    else
    {
        cout << "No, " << ch << " is not a Digit\n";
    }

    return 0;
}