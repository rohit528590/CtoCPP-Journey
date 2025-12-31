// Program to display the geometric progression: 3, 12, 48, ... up to 'n' terms.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Geometric Progression Program\n";
    int n;
    
    cout << "Enter how many terms of the pattern to print : ";
    cin >> n;
    
    int starting_term = 3;
    for (int i = 1; i <= n; i++)
    {
        cout << starting_term << " ";
        starting_term *= 4;
    }
    
    cout << endl;
    return 0;
}