// Program to print the sum of a number 'n' and its reverse.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Sum Number and Reverse Program\n";
    int num, reversed = 0;

    cout << "Enter a number to calculate the sum of it and its reverse : ";
    cin >> num;

    int originalNumber = num;
    while (num > 0)
    {
        reversed = (reversed * 10) + (num % 10);
        num /= 10;
    }

    int sum = originalNumber + reversed;
    cout << "The sum of " << originalNumber << " and its reverse " << reversed << " is : " << sum << endl;

    return 0;
}