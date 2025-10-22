// Program to calculate the volume of a sphere when the radius is given by the user.
// Formula : Volume = (4/3) * PI * radius * radius * radius
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Sphere Volume Calculator!\n";
    const float PI = 3.1416;
    float radius;

    cout << "Enter the Radius : ";
    cin >> radius;

    float Volume = (4.0 / 3) * PI * radius * radius * radius;
    cout << "The Volume of Sphere is : " << Volume << endl;
    
    return 0;
}