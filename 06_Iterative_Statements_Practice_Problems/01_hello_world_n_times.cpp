// Program to print "Hello World" 'n' times, where 'n' is input from the user.
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter how many times you want to print 'Hellow World' : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Hellow World\n";
    }

    return 0;
}
