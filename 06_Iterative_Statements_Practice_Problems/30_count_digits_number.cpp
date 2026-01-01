// Program to count the digits of a given number.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Count Digits Number Program\n";
    int number, digit_count = 0;

    cout << "Enter a number to count its digits : ";
    cin >> number;

    int original = number; // Store original value for display

    while (number > 0)
    {
        digit_count++;
        number /= 10;
    }

    cout << "The number of digits in " << original << " is : " << digit_count << endl;
    return 0;
}
