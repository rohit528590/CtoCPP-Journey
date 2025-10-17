// Program to calculate the cube of a given number.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to World of Cube\n";
    int n;

    cout << "Enter the Number : ";
    cin >> n;

    int n_Cube = n * n * n;
    cout << "Cube of " << n << " is : " << n_Cube << endl;
    return 0;
}