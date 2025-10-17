// Program to calculate the area of a square when the side length is given.
// Formula : Area = side * side
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Area of Square Calculation\n";
    float side;

    cout << "Enter Side of Square : ";
    cin >> side;

    int Area = side * side;
    cout << "The Area of your Square is : " << Area << endl;
    return 0;
}