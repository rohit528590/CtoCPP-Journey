// Program to print all ASCII values and their equivalent characters from 'A' to 'Z'
// (characters can be uppercase or lowercase as specified by user) using a while loop.
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

    while (ch <= end)
    {
        cout << ch << " = " << (int)ch << endl;
        ch++;
    }

    return 0;
}