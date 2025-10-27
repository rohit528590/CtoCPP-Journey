/* 
3. Square Number Pattern
Program to print a square pattern using consecutive numbers.
Example : dimension = 4
Expected Output:
1 2 3 4
1 2 3 4
1 2 3 4
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Square Number Pattern Program!\n";
    int dimension;

    cout << "Enter the dimension of Square : ";
    cin >> dimension;

    cout << "\nSquare Pattern(" << dimension << " x " << dimension << ") with Number -:\n";
    for (int i = 1; i <= dimension; i++)
    {
        for (int j = 1; j <= dimension; j++)
        {
            cout << j << " ";
        }

        cout << "\n";
    }
    
    cout << "\nThank You!\n";
    return 0;
}