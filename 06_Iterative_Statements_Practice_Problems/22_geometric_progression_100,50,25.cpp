// Program to display the geometric progression: 100, 50, 25, ... up to 'n' terms.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Geometric Progression Program\n";
    float n;
    
    cout << "Enter how many terms of the pattern to print : ";
    cin >> n;
    
    float starting_term = 100;
    for (float i = 1; i <= n; i++)
    {
        cout << starting_term << " ";
        starting_term /= 2;
    }
    
    cout << endl;
    return 0;
}