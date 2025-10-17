// Program to swap two numbers.
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter the First Number : ";
    cin >> num1;
    cout << "Enter the Second Number : ";
    cin >> num2;

    // Swapping the numbers using a temporary variable
    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping the numbers using a temporary variable\n";
    cout << "The First Number is : " << num1 << endl;
    cout << "The Second Number is : " << num2 << endl;

    // Swapping the numbers without using a temporary variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "After swapping the numbers without using a temporary variable\n";
    cout << "The First Number is : " << num1 << endl;
    cout << "The Second Number is : " << num2 << endl;
    
    return 0;
}