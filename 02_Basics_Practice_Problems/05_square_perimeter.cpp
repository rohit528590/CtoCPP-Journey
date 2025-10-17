// Program to calculate the perimeter of a square when the side length is given.
// Formula : Perimeter = 4 * side
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Perimeter of Square Calculation\n";
    float side;

    cout << "Enter Side of Square : ";
    cin >> side;

    float Perimeter = 4 * side;
    cout << "Perimeter of your Square is : " << Perimeter << endl;
    return 0;
}