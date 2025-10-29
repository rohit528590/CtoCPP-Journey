// Function to find the smallest number among three given numbers (handle equal numbers appropriately).
#include <iostream>
using namespace std;

int findMinimum(int a, int b, int c)
{
    int min = a; 

    if (b < min)
    {
        min = b;
    }

    if (c < min)
    {
        min = c;
    }

    // Check for equality among numbers
    if (a == b && b == c)
    {
        cout << "All three numbers are equal (" << a << " = " << b << " = " << c << ")" << endl;
    }
    
    else if (a == b)
    {
        cout << "Two numbers are equal (" << a << " = " << b << ")" << endl;
    }
    
    else if (b == c)
    {
        cout << "Two numbers are equal (" << b << " = " << c << ")" << endl;
    }
    
    else if (a == c)
    {
        cout << "Two numbers are equal (" << a << " = " << c << ")" << endl;
    }

    return min;
}

int main()
{
    int num1, num2, num3;
    
    cout << "Enter the first number : ";
    cin >> num1;
    
    cout << "Enter the second number : ";
    cin >> num2;
    
    cout << "Enter the third number : ";
    cin >> num3;

    cout << "The smallest number is : " << findMinimum(num1, num2, num3) << endl;
    return 0;
}