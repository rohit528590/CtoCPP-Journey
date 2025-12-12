// Program to print the multiplication table of N (given by user).
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Multiplication Table Program!\n";
    int number;

    cout << "Enter Number : ";
    cin >> number;

    cout << "Table of " << number << " is -:" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}