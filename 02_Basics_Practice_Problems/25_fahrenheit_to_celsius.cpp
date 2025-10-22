// Program to convert temperature from Fahrenheit to Celsius.
// Formula : Celsius = 5/9(Fahrenheit-32)
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Fahrenheit to Celsius Converter!\n";
    float Fahrenheit;

    cout << "Enter temperature in Fahrenheit : ";
    cin >> Fahrenheit;

    float celsius = 5.0 / 9.0 * (Fahrenheit - 32);
    cout << "Temperature in Celsius : " << celsius << " C\n";

    return 0;
}