// Program to calculate the factorial of a given number.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Factorial Program\n";
    int number;

    cout << "Enter a number to calculate its factorial : ";
    cin >> number;

    int factorial = 1;
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }

    cout << "The factorial of " << number << " is : " << factorial << endl;
    return 0;
}