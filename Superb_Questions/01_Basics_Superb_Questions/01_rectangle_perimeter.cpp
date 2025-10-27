// Program to calculate the perimeter of a rectangle when length and breadth are given by the user.
// Formula : Perimeter = 2 * (length + breadth)
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Rectangle Perimeter Calculator." << endl;
    float length, breadth;
    
    cout << "Enter length of rectangle : ";
    cin >> length;

    cout << "Enter breadth of rectangle : ";
    cin >> breadth;

    float perimeter = 2 * (length + breadth);
    cout << "The Perimeter of Rectangle is : " << perimeter << endl;

    return 0;
}