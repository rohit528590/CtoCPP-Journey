// Program to determine whether the year is a leap year or not. (Consider that leap years occur every 4 years)
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Leap Year Checker\n";
    int year;
    
    cout << "Enter the Year : ";
    cin >> year;
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " is Leap Year.\n";
    }
    
    else
    {
        cout << year << " is Not Leap Year.\n";
    }

    return 0;
}