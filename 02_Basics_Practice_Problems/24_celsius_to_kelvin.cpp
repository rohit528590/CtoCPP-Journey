// Program to convert temperature from Celsius to Kelvin.
// Formula : Kelvin = Celsius + 273.15
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Celsius to Kelvin Converter!\n";
    float Celsius;

    cout << "Enter temperature in Celsius : ";
    cin >> Celsius;

    float kelvin = Celsius + 273.15;
    cout << "Temperature in Kelvin : " << kelvin << " K\n";

    return 0;
}