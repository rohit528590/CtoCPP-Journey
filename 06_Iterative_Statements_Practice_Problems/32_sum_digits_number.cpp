// Program to calculate the sum of digits of a given number.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Sum Digits Number Program\n";
    int num, sum = 0;

    cout << "Enter a number to calculate the sum of its digits : ";
    cin >> num;

    int original = num; // Store the original number for display

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    cout << "The sum of digits of " << original << " is : " << sum << endl;
    return 0;
}