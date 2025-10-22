// Program to calculate the volume of a cylinder given its radius and height.
// Formula : Volume = PI * radius * radius * height
#include <iostream>
#define PI 22.0 / 7.0
using namespace std;

int main()
{
    cout << "Welcome to the Cylinder Volume Calculator!\n";
    float radius, height;

    cout << "Enter the Radius : ";
    cin >> radius;

    cout << "Enter the Height : ";
    cin >> height;
    
    float Volumn = PI * radius * radius * height;
    cout << "The Volume of Cylinder is : " << Volumn << endl;
    
    return 0;
}