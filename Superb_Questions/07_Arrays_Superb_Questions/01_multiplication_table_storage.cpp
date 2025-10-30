// Program to store the multiplication table of a given number in an array. 
#include <iostream>
using namespace std;

#define TABLE_SIZE 10

int main()
{
    int number;
    cout << "Enter a number to generate its multiplication table (1 to " << TABLE_SIZE << ") : ";
    cin >> number;

    int Table[TABLE_SIZE];

    for (int i = 0; i < TABLE_SIZE; i++)
    {
        Table[i] = number * (i + 1);
    }

    cout << "Multiplication Table of " << number << " :\n";
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        cout << number << " x " << i + 1 << " = " << Table[i] << endl;
    }

    return 0;
}
