// Program to check if a given dividend is divisible by a given divisor.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Divisibility Checker\n";
    int Divided,Divisor;

    cout << "Enter divisor number : ";
    cin >> Divisor;

    cout << "Enter divided number : ";
    cin >> Divided;

    if (Divided % Divisor == 0)
    {
        cout << Divided << " is equally divided by " << Divisor << ".\n";
    }
    else
    {
        cout << Divided << " is not equally divided by " << Divisor << ".\n";
    }

    return 0;
}