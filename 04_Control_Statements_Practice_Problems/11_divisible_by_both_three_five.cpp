// Program to determine if a given positive integer is divisible by both 5 and 3 without using nested if statements.
#include<iostream>
using namespace std;

int main()
{
    cout << "Welcome to Divisibility Calculator\n";
    int num;

    cout << "Enter the Number : ";
    cin >> num;

    if (num % 3 == 0)
    {
        if (num % 5 == 0)
        {
            cout << num << " is divisible by both 3 and 5.\n";
        }
        else
        {
            cout << num << " is divisible by only 3.\n";
        }
    }

    else if (num % 5 == 0)
    {
        cout << num << " is divisible by only 5.\n";
    }
    
    else
    {
        cout << num << " is not divisible by both 3 and 5.\n";
    }

    return 0;
}
