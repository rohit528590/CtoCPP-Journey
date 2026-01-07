// Program to print the sum of digits of a given number plus the sum of digits of its reverse.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Sum Digits Plus Reverse Program\n";
    int num, sum_of_num = 0, reversed = 0, sum_of_reversed = 0;

    cout << "Enter a number to calculate the sum of its digits plus the sum of digits of its reverse : ";
    cin >> num;
    
    int original = num;

    // Step 1: Calculate the sum of digits and the reverse of the original number
    while (num > 0)
    {
        int digit = num % 10;
        sum_of_num += digit;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    // Step 2: Calculate the sum of digits of the reversed number
    int temp = reversed;
    while (temp > 0)
    {
        sum_of_reversed += temp % 10;
        temp /= 10;
    }
    
    // Output
    cout << "The sum of digits of " << original << " is : " << sum_of_num << endl;
    cout << "The sum of digits of its reverse (" << reversed << ") is : " << sum_of_reversed << endl;

    cout << "Total sum : " << sum_of_num + sum_of_reversed << endl;
    return 0;

}