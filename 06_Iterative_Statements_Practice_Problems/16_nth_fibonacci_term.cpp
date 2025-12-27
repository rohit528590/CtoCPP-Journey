// Program to print the nth term of the Fibonacci series.
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
    
    if (term <= 0 || term == 1)
    {
        if (term == 0)
        {
            cout << "The 0th term of the Fibonacci series is : " << previous_term << endl;
        }
        else if (term == 1)
        {
            cout << "The 1st term of the Fibonacci series is : " << last_previous_term << endl;
        }
        else
        {
            cout << "Invalid term. Please enter a positive integer." << endl;
        }
        return 0;
    }
    
    for (int i = 2; i <= term; i++)
    {
        fibonacci_term = previous_term + last_previous_term;
        previous_term = last_previous_term;
        last_previous_term = fibonacci_term;
    }
    cout << term << "th term of the Fibonacci series is : " << fibonacci_term << endl;

    return 0;
}