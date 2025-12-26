// Program to print all ASCII values and their equivalent characters from 'A' to 'Z'
// (characters can be uppercase or lowercase as specified by user) using a for loop.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to ASCII Values Program\n";
    char ch, end;

    cout << "Enter the starting character (small/capital) : ";
    cin >> ch;

    cout << "Enter the ending character (small/capital) : ";
    cin >> end;

    for (char i = ch; i <= end; i++)
    {
        cout << i << " = " << (int)i << endl;
    }
    
    return 0;
}