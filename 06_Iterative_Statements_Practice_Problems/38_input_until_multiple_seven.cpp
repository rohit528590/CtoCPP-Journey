// Program to continuously take input from the user until a number that is a multiple of 7 is entered.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Input Until Multiple of 7 Program\n";
    int inputNumber;

    cout << "Enter numbers that are not multiples of 7 for continue and multiple of 7 for exit : \n";
    do
    {
        cout << "Enter a number : ";
        cin >> inputNumber;
    } while (inputNumber % 7 != 0);

    cout << inputNumber << " is a multiple of 7 so you get exit from the loop.\n";
    return 0;
}