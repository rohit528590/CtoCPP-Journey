// Program to check if a number is prime or composite.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Prime/Composite Check Program\n";
    int num, Is_Prime = 1;

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

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            Is_Prime = 0;
            cout << num << " is a Composite Number.\n";
            break;
        }
    }

    if (Is_Prime)
    {
        cout << num << " is Prime Number.\n";
    }
    
    return 0;
}
