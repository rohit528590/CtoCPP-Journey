// Program to calculate simple interest when principal, rate, and time are given by the user.
// Formula : Simple Interest = (Principal * Rate * Time) / 100
#include <iostream>
using namespace std;

int main()
{
    float principle, time, rate;

    cout << "Enter the Pricipal : ";
    cin >> principle;

    cout << "Enter time : ";
    cin >> time;
    
    cout << "Enter rate : ";
    cin >> rate;
    
    float simple_interest = (principle * rate * time) / 100;
    cout << "Simple Interst is : " << simple_interest << "\n";

    return 0;
}