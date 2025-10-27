// Program to determine if a given positive integer is divisible by 5 or not.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Divisible by 5 Checker\n";
    int num;
    
    cout << "Enter Number : ";
    cin >> num;
    
    if (num % 5 == 0)
    {
        cout << num << " is divisible by 5.\n";
    }    
    else
    {
        cout << num << " is not divisible by 5.\n";
    }

    return 0;
}