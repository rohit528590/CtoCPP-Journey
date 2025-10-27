/* 
2. Square Star Pattern
Program to print a square pattern using asterisks.
Example : dimension = 4
Expected Output:
* * * *
* * * *
* * * *
* * * *
*/
#include <iostream>
using namespace std;

int main()
{
    cout<<"Welcome to Square Star Pattern Program!\n";
    int dimension;

    cout << "Enter the Dimension of Square : ";
    cin >> dimension;

    cout << "\nSquare Pattern(" << dimension << "x" << dimension << ") with Asterisks -:\n";
    for (int i = 1; i <= dimension; i++)
    {
        for (int j = 1; j <= dimension; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    cout<<"\nThank You!\n";
    return 0;
}