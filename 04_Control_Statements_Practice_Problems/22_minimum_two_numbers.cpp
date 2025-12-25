// Program to find the minimum of two numbers.
#include<iostream>
using namespace std;

int main()
{
    cout<< "Welcome to Minimum of Two Numbers Program\n";
    int a, b;

    cout << "Enter 1st Number : ";
    cin >> a;

    cout << "Enter 2nd Number : ";
    cin >> b;

    if (a > b)
    {
        cout << "Minimum value is : " << b << endl;
    }

    else if (a < b)
    {
        cout << "Minimum value is : " << a << endl;
    }
    
    else
    {
        cout << "Both numbers are equal (" << a << " = " << b << ").\n";
    }

    return 0;
}