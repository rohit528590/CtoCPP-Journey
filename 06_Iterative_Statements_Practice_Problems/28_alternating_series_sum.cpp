// Program to calculate the sum of the series: 1 - 2 + 3 - 4 + 5 - 6 + ... up to 'n' terms.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Alternating Series Sum Program\n";
    int term, sum = 0;

    cout << "Enter how many terms of the pattern to calculate the sum : ";
    cin >> term;

    for (int i = 1; i <= term; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }

        else
        {
            sum += i;
        }
    }
    
    cout << "The sum of the given series is : " << sum << endl;
    return 0;
}