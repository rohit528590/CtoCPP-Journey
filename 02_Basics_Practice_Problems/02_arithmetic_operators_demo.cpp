// Program that takes two numbers and shows result of all arithmetic operators (+,-,*,/,%).
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome in Arithmetic Operators Demo\n";
    int first, second;

    cout << "Enter the First Number : ";
    cin >> first;

    cout << "Enter the Second Number : ";
    cin >> second;

    cout << "\nHere are the results of the arithmetic operators\n";
    cout << first << " + " << second << " = " << first + second << endl;
    cout << first << " - " << second << " = " << first - second << endl;
    cout << first << " X " << second << " = " << first * second << endl;
    cout << first << " / " << second << " = " << first / second << "    (Integer Division)" << endl;
    cout << first << " % " << second << " = " << first % second << endl;
    return 0;
}