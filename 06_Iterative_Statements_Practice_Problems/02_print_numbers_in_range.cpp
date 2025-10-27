// Program to print all numbers within a given range.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Print Number in Range Program!\n";
    int start,end;

    cout << "Enter where you want to start printing Number : ";
    cin >> start;
    
    cout << "Enter where you want to stop printing Number : ";
    cin >> end;

    for (int i = start; i <=end; i++)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}