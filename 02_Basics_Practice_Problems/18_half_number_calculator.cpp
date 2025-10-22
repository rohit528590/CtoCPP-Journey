// Program to print half of a given number.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Half Number Calculator!\n";
    float number;

    cout << "Enter the Number : ";
    cin >> number;

    float half = number / 2.0;
    cout << "Half of " << number << " is : " << half << endl;
    
    return 0;
}