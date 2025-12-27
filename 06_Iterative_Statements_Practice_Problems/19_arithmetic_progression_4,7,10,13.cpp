// Program to display the arithmetic progression: 4, 7, 10, 13, 16, ... up to 'n' terms.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Arithmetic Progression Program\n";
    int n;
    
    cout << "Enter how many terms of the pattern to print : ";
    cin >> n;
    
    int starting_term = 4;
    for (int i = 1; i <= n; i++)
    {
        cout << starting_term << " ";
        starting_term += 3;
    }
    
    cout << endl;
    return 0;
}