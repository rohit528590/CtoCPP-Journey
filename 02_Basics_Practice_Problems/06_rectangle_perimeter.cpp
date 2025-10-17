// Program to calculate the perimeter of a rectangle when length and breadth are given by the user.
// Formula : Perimeter = 2 * (length + breadth)
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Perimeter of Rectangle Calculation\n";
    float length, breadth;

    cout << "Enter the Lenght of Rectangle : ";
    cin >> length;

    cout << "Enter the Breadth of Rectangle : ";
    cin >> breadth;
    
    float perimeter = 2 * (length + breadth);
    cout << "The Perimeter of your Rectangle is : " << perimeter << endl;
    return 0;
}