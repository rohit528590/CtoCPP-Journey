// Program to calculate the circumference of a circle when the radius is given by the user.
// Formula : Circumference = 2 * PI * radius
#include <iostream>
using namespace std;
#define PI 22.0 / 7.0
/*
#define is a preprocessor directive used to define macros. It tells the compiler to replace all
instances of a defined identifier with a specified value or code snippet before actual compilation begins.
*/

int main()
{
    cout << "Welcome to Perimeter of Circle Calculation\n";
    float radius;

    cout << "Enter the Radius of Circle : ";
    cin >> radius;

    float Perimeter = 2 * PI * radius;
    cout << "The Perimeter of your Circle is : " << Perimeter << endl;
    return 0;
}