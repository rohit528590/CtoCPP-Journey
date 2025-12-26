// Program to print the factorial of all numbers within a given range.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Factorial Program\n";
    int start, end;

    cout << "Enter starting number for factorials : ";
    cin >> start;

    cout << "Enter ending number for factorials : ";
    cin >> end;
    
    for (int i = start; i <= end; i++)
    {
        int factorial = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        cout << "The factorial of " << i << " is : " << factorial << endl;
    }

    return 0;
}
