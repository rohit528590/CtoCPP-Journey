// Program that determines if a given year is a leap year 
// (considering conditions like divisible by 4 but not 100, unless also divisible by 400).
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Leap Year Checker Program\n";
    int year;
    
    cout << "Enter the Year : ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        cout << year << " is Leap Year.\n";
    }

    else
    {
        cout << year << " is not Leap Year.\n";
    }
    
    /* 2nd Way -:
    if (year % 400 == 0)
    {
        cout << year << " is a leap year." << endl;
    }

    else if (year % 100 == 0)
    {
        cout << year << " is not a leap year." << endl;
    }

    else if (year % 4 == 0)
    {
        cout << year << " is a leap year." << endl;
    }

    else
    {
        cout << year << " is not a leap year." << endl;
    }
    */
    
    return 0;
}