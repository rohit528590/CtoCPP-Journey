// Program to check whether a given number is a palindrome.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Palindrome Number Check Program\n";
    int number, reversed = 0;

    cout << "Enter a number : ";
    cin >> number;

    int original = number; // Store the original number for display
    while (number > 0)
    {
        reversed = (reversed * 10) + (number % 10);
        number /= 10;
    }

    if (original == reversed)
    {
        cout << original << " is a palindrome number.\n";
    }
    
    else
    {
        cout << original << " is not a palindrome number.\n";
    }

    return 0;
}