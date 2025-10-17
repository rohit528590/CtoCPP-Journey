// Program to calculate the Area of a Triangle.
// Area of triangle = 1/2 * Base * Height
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Area of Triangle calculation.\n";
    int base, height;

    cout << "Enter the Base of Triangle : ";
    cin >> base;

    cout << "Enter the Height of Triangle : ";
    cin >> height;

    float Area = 1.0 / 2 * base * height;
    cout << "The Area of Triangle is : " << Area << endl;
    return 0;
}