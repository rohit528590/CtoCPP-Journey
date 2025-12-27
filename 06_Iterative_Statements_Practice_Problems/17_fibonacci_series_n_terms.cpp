// Program to print the Fibonacci series from the first term to the nth term.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Fibonacci Series Program\n";
    int term;

    cout << "Enter which term of the Fibonacci series you want : ";
    cin >> term;

    int previous_term = 0;
    int last_previous_term = 1;
    int fibonacci_term = 0;
    
    cout << "The is Your Fibonacci Series from 0th Term to " << term << "th Term : ";
    cout << previous_term << " ";
    cout << last_previous_term << " ";

    for (int i = 2; i <= term; i++)
    {
        fibonacci_term = previous_term + last_previous_term;
        previous_term = last_previous_term;
        last_previous_term = fibonacci_term;
        cout << fibonacci_term << " ";
    }
    
    cout << endl;
    return 0;
}