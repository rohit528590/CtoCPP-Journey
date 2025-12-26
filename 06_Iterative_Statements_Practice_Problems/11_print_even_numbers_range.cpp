// Program to print all even numbers within a given range.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Print Even Numbers Program\n";
    int start, end;

    cout << "Enter the starting value of the range : ";
    cin >> start;

    cout << "Enter the ending value of the range : ";
    cin >> end;

    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}
