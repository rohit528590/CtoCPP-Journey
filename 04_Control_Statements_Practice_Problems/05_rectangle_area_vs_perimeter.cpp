// Given the length and breadth of a rectangle, Program to determine whether the area of the rectangle is greater than its perimeter.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Rectangle Area vs Perimeter Calculator\n";
    float length, breadth;

    cout << "Enter length of rectangle : ";
    cin >> length;

    cout << "Enter breadth of rectangle : ";
    cin >> breadth;

    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    if (area > perimeter)
    {
        cout << area << " is the area of the rectangle, which is greater than its perimeter (" << perimeter << ")\n";
    }

    else if (area < perimeter)
    {
        cout << area << " is the area of the rectangle, which is less than its perimeter (" << perimeter << ")\n";
    }

    else
    {
        cout << area << " is the area of the rectangle, which is equal to its perimeter (" << perimeter << ")\n";
    }

    return 0;
}