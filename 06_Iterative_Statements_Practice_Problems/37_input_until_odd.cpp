// Program to keep taking numbers as input from the user until an odd number is entered.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Input Until Odd Program\n";
    int number;

    cout << "Enter even number for continue and odd number for exit : ";
    do
    {
        cout << "Enter a new number : ";
        cin >> number;
    } while (number % 2 == 0);

    cout << number << " is not an even number so you get exit from the loop.\n";
    return 0;
}