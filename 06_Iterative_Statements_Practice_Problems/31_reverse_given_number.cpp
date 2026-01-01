// Program to print the reverse of a given number.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Reverse Given Number Program\n";
    int num;

    cout << "Enter an integer to reverse : ";
    cin >> num;

    int original = num; // Store the original number for display
    int reversedNumber = 0;

    while (num > 0)
    {
        reversedNumber = (reversedNumber * 10) + (num % 10);
        num /= 10;
    }

    cout << "The reverse of " << original << " is : " << reversedNumber << endl;
    return 0;
}