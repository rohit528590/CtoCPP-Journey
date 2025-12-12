// Program to print the multiplication table of a user-given number in reverse order.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Reverse Multiplication Table Program!\n";
    int num;

    cout << "Enter Number : ";
    cin >> num;

    cout << "Table of " << num << " in reverse order is : ";
    for (int i = num * 10; i >= num; i -= num)
    {
        cout << i << " ";
    }
    
    cout << endl;
    return 0;
}