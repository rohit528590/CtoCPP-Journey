// Program to convert temperature from Celsius to Fahrenheit.
// Formula : Fahrenheit = (Celsius * 9/5) + 32
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Celsius to Fahrenheit Converter!\n";
    float celsius;

    cout << "Enter temperature in Celsius : ";
    cin >> celsius;

    float fahrenheit = (celsius * 9.0 / 5) + 32;
    cout << "Temperature in Fahrenheit : " << fahrenheit << " F\n";

    return 0;
}