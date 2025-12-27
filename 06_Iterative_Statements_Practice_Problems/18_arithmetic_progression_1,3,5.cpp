// Program to display the arithmetic progression: 1, 3, 5, 7, 9, ... up to 'n' terms.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Arithmetic Progression Program\n";
    int n;
    
    cout << "Enter how many terms of the pattern to print : ";
    cin >> n;
    
    int starting_term = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << starting_term << " ";
        starting_term += 2;
    }
    
    cout << endl;
    return 0;
}