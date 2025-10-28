// Program to check if a given character is a digit.
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter Character : ";
    cin >> ch;

    if (ch>='0'&&ch<='9')
    {
        cout << ch << " is digit.\n";
    }
    
    else
    {
        cout << ch << " is not digit.\n";
    }

    return 0;
}