// Program to determine if a person is eligible for a driving license based on their age.
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter Your Age : ";
    cin >> age;

    if (age >= 18)
    {
        cout << "Yes, you are eligible for a driving license.\n";
    }
    
    else
    {
        cout << "No, you are not eligible for a driving license.\n";
    }

    return 0;
}