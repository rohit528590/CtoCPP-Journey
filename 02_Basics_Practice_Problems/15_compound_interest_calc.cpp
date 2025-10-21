// Program to calculate Compound interest.
// Compound Interest = Principal * (1 + Rate/100)^Time
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Compound Interest calculation." << endl;
    float principal, rate, time;

    cout << "Enter the principal : ";
    cin >> principal;

    cout << "Enter the time (in years) : ";
    cin >> time;

    cout << "Enter the rate : ";
    cin >> rate;

    float Compound_Interest = principal * pow((1.0 + rate / 100), time);
    cout << "The Compound Interest is : " << Compound_Interest << endl;

    return 0;
}