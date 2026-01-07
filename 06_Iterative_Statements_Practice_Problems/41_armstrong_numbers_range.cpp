// Program to print all Armstrong numbers between R (starting value) and S (ending value) as given by the user.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Armstrong Numbers Range Program\n";
    int start, end;

    cout << "Enter the starting value of the range : ";
    cin >> start;

    cout << "Enter the ending value of the range : ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are -:\n";
    for (int num = start; num <= end; num++)
    {
        int temp = num, digits = 0, sum = 0;
        // Count number of digits
        while (temp > 0)
        {
            digits++;
            temp /= 10;
        }

        temp = num;
        // Calculate sum of digits raised to the power of 'digits'
        while (temp > 0)
        {
            int digit = temp % 10;
            sum += (int)pow(digit, digits); //	pow() returns a double, so casting to int is common.
            temp /= 10;
        }

        if (sum == num)
        {
            cout << num << " ";
        }
    }
    
    cout << endl;
    return 0;
}
