// Program to display the arithmetic progression: 100, 97, 94, ... down to the last positive term, with 'n' starting terms.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Arithmetic Progression Program\n";
    int n;

    cout << "Enter the starting term of your sequence : ";
    cin >> n;

    for (int i = n; i > 0; i -= 3)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}