// Program to print all odd numbers from R to S (both values provided by the user).
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Print Odd Number in Range Program!\n";
    int start, end;

    cout << "Enter Numbers from start printing odd number : ";
    cin >> start;

    cout << "Enter Number where end of printing odd number : ";
    cin >> end;

    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}
