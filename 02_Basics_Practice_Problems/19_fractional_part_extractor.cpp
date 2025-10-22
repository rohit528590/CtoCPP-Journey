// Program to take a float input and print the fractional part of the real number.
// Formula : Fractional Part = Number - Integer Part
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Fractional Part Extractor!\n";
    float number;

    cout << "Enter the Number : ";
    cin >> number;

    float fraction_part = number - (int)number; // Typecast number to int(number) to get the integer part
    cout << "Fractional of " << number << " is : " << fraction_part << endl;

    return 0;
}