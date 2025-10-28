// Program to print the multiplication table of N (given by user).
#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter Number : ";
    cin >> number;

    cout << "Table of " << number << " is ->";
    for (int i = number; i <= (number * 10); i += number)
    {
        cout << i << " ";
    }

    cout << "\n";
    return 0;
}