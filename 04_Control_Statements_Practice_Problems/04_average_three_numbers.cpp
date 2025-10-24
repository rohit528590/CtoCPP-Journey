// Program to calculate and print the average of 3 numbers.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Average Calculator of Three Numbers\n";
    int num1, num2, num3;

    cout << "Enter your 1st number : ";
    cin >> num1;

    cout << "Enter your 2nd number : ";
    cin >> num2;

    cout << "Enter your 3rd number : ";
    cin >> num3;

    float average = (num1 + num2 + num3) / 3.0;
    cout << "The Average/Mean of your given three numbers is : " << average << endl;

    return 0;
}