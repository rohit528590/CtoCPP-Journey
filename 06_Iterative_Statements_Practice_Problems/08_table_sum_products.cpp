// Program to print the multiplication table of 'n' and calculate the sum of all products in the table.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Table Sum Products Program!\n";
    int number, sumOfTable = 0;

    cout << "Enter Number : ";
    cin >> number;

    cout << "Table of " << number << " is : ";
    for (int i = number; i <= number * 10; i += number)
    {
        cout << i << " ";
        sumOfTable += i;
    }
    
    cout << "\nThe sum of the table of " << number << " is : " << sumOfTable << ".\n";
    return 0;
}