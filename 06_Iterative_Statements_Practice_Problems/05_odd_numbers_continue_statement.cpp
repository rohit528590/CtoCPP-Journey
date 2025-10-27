// Program to print odd numbers from a user-defined range (R to S) using 'continue' statements.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Print Odd Number in Range Program!\n";
    int start, end;

    cout << "Enter the starting value of the range : ";
    cin >> start;

    cout << "Enter the ending value of the range : ";
    cin >> end;

    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << " ";
    }

    cout << endl;
    return 0;
}