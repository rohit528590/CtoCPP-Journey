// Program to print the sum of all odd digits of a given number.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Sum Odd Digits Program\n";
    int num, sum = 0;

    cout << "Enter a number to calculate the sum of its odd digits : ";
    cin >> num;

    int original = num; // Preserve the original number for output
    
    while (num > 0)
    {
        int digit = num % 10;

        if (digit % 2 != 0) // Check if the digit is odd
        {
            sum += digit;
        }

        num /= 10;
    }

    cout << "The sum of odd digits of " << original << " is : " << sum << endl;
    return 0;
}