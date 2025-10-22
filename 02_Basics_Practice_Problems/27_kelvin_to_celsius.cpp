// Program to convert temperature from Kelvin to Celsius.
// Formula : Celsius = Kelvin - 273.15
#include <iostream>
using namespace std;
 
int main()
{
    cout << "Welcome to the Kelvin to Celsius Converter!\n";
    float Kelvin;
    
    cout << "Enter temperature in Kelvin : ";
    cin >> Kelvin;

    float celsius = Kelvin - 273.15;
    cout << "Temperature in Celsius : " << celsius << " C\n";
    
    return 0;
}