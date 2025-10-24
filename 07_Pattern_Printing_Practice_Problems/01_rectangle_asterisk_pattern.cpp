/* 
1. Rectangle Pattern with Asterisks
Program to print a rectangle pattern using asterisks.
Example : rows = 3, columns = 4
Expected Output:
* * * * *
* * * * *
* * * * * 
*/
#include <iostream>
using namespace std;

int main()
{
    int rows, columns;

    cout << "Enter the number of rows : ";
    cin >> rows;

    cout << "Enter the number of columns : ";
    cin >> columns;

    cout << "Rectangle(" << rows << " x " << columns << ") Pattern with Asterisks -:\n";
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            cout << "* ";
        }

        cout << "\n";
    }

    return 0;
}