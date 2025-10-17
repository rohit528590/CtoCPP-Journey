// Program to calculate the area of a rectangle when length and breadth are given by the user.
// Formula : Area = length * breadth
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Area of Rectangle Calculation\n";
    float length, breadth;

    cout << "Enter the Lenght of Rectangle : ";
    cin >> length;

    cout << "Enter the Breadth of Rectangle : ";
    cin >> breadth;

    float Area = length * breadth;
    cout << "The Area of your Rectangle is : " << Area << endl;
    return 0;
}