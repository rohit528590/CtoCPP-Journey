// Program to check whether a given number is prime or not using while loops.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Prime Check Using While Loop Program\n";
    int num;
    
    bool Is_Prime = true;

    cout << "Enter Number : ";
    cin >> num;

    if (num == 1 || num <= 0)
    {
        if (num <= 1)
        {
            cout << num << " is neither a prime nor composite.\n";
        }
        else
        {
            cout << num << " is a Invalid Number.\n";
        }
        return 0;
    }
    
    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            cout << num << " is Composite Number.\n";
            Is_Prime = false;
            break;
        }
        i++;
    }

    if (Is_Prime)
    {
        cout << num << " is Prime Number.\n";
    }

    return 0;
}
