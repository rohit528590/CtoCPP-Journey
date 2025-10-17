// Program to calculate the area of a circle when the radius is given by the user.
// Formula : Area = PI * radius * radius
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Area of Circle Calculation\n";
    const float PI = 22.0 / 7.0;
    float radius;

    cout << "Enter the Radius of Circle : ";
    cin >> radius;

    float Area = PI * radius * radius;
    cout << "Area of your Circle is : " << Area << endl;
    return 0;
}