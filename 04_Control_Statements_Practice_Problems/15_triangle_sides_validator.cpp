// Program to determine if 3 numbers can form the sides of a triangle using logical operators.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Triangle Validator\n";
    int side1, side2, side3;
    
    cout << "Enter the length of 1st side : ";
    cin >> side1;
    
    cout << "Enter the length of 2nd side : ";
    cin >> side2;
    
    cout << "Enter the length of 3rd side : ";
    cin >> side3;
    
    if ((side1 + side2) > side3 && (side2 + side3) > side1 && (side1 + side3) > side2)
    {
        cout << "Yes, They can be side of triangle(" << side1 << "," << side2 << "," << side3 << ").\n";
    }
    
    else
    {
        cout << "No, They can't be side of triangle(" << side1 << "," << side2 << "," << side3 << ").\n";
    }

    return 0;
}