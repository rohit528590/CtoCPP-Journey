// Program that determines the greatest of the three numbers.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Greatest of Three Numbers Program\n";
    int first, second, third;

    cout << "Enter First number : ";
    cin >> first;

    cout << "Enter Second number : ";
    cin >> second;

    cout << "Enter Third number : ";
    cin >> third;

    if (first > second)
    {
        if (first > third)
        {
            cout << first << " is Greatest Number.\n";
        }
        else
        {
            cout << third << " is Greatest Number.\n";
        }
    }

    else
    {
        if (second > third)
        {
            cout << second << " is Greatest Number.\n";
        }
        else
        {
            cout << third << " is Greatest Number.\n";
        }
    }
    
    /* 2nd Way -:
    if (first > second && first > third)
    {
        cout << first << " is Greatest Number.\n";
    }

    else if (second > third)
    {
        cout << second << " is Greatest Number.\n";
    }

    else
    {
        cout << third << " is Greatest Number.\n";
    }
    */
    
    return 0;
}