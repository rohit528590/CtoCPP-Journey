// Program to print all prime numbers within a given range.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Prime Numbers Range Program\n";
    int n, count = 0, num = 2;

    cout << "Enter how many prime numbers you want to print : ";
    cin >> n;

    cout << "First " << n << " prime numbers are -:\n";

    while (count < n)
    {
        bool isPrime = true;

        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << num << " ";
            count++;
        }

        num++;
    }

    cout << endl;
    return 0;
}