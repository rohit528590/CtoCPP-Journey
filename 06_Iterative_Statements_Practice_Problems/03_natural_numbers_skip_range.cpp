// Program to print natural numbers from R (start) to S (end), excluding numbers in the range from I (skip start) to K (skip end).
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Natural Number Skip Range Program!\n";
    int printStart, printEnd, excludeStart, excludeEnd;

    cout << "Enter the start of the print range : ";
    cin >> printStart;

    cout << "Enter the end of the print range : ";
    cin >> printEnd;

    cout << "Enter the start of the exclusion range : ";
    cin >> excludeStart;

    cout << "Enter the end of the exclusion range : ";
    cin >> excludeEnd;

    for (int i = printStart; i <= printEnd; i++)
    {
        if (i >= excludeStart && i <= excludeEnd)
        {
            continue;
        }
        cout << i << " ";
    }

    cout << endl;
    return 0;
}