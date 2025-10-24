// Program to determine whether a character entered by the user is lowercase.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Lowercase Character Checker\n";
    char ch;

    cout << "Enter Character : ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is a lowercase character.\n";
    }
    else
    {
        cout << ch << " is not a lowercase character.\n";
    }

    return 0;
}