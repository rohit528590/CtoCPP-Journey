// Program to convert temperature from Fahrenheit to Kelvin.
// Formula : Kelvin = ((Fahrenheit-32)*5/9)+273.15
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Fahrenheit to Kelvin Converter!\n";
    float Fahrenheit;

    cout << "Enter temperature in Fahrenheit : ";
    cin >> Fahrenheit;

    float kelvin = ((Fahrenheit - 32) * 5.0 / 9.0) + 273.15;
    cout << "Temperature in Kelvin : " << kelvin << " K\n";

    return 0;
}