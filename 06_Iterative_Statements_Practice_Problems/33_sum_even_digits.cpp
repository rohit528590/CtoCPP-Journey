// Program to print the sum of all even digits of a given number.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Sum Even Digits Program\n";
    int num, sum = 0;

    cout << "Enter a number to calculate the sum of its even digits : ";
    cin >> num;

    int original = num; // Preserve the original number for output

    while (num > 0)
    {
        int digit = num % 10;

        if (digit % 2 == 0) // Check if the digit is even
        {
            sum += digit;
        }

        num /= 10;
    }

    cout << "The sum of even digits of " << original << " is : " << sum << endl;
    return 0;
}