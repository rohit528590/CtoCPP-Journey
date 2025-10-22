// Program to convert temperature from Kelvin to Fahrenheit.
// Formula : Fahrenheit = (Kelvin-273.15)*9/5+32
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Kelvin to Fahrenheit Converter!\n";
    float Kelvin;
    
    cout << "Enter termperature in Kelvin : ";
    cin >> Kelvin;

    float fahrenheit = (Kelvin - 273.15) * 9.0 / 5.0 + 32;
    cout << "Temperature in Fahrenheit : " << fahrenheit << " F\n";

    return 0;
}