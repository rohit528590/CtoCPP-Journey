// Program to calculate the sum of numbers from R to S using a while loop.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Sum of Range Program\n";
    int r, s, sum = 0;

    cout << "Enter the starting number : ";
    cin >> r;

    cout << "Enter the ending number : ";
    cin >> s;

    int start = r;
    while (s >= r)
    {
        sum += r;
        r++;
    }

    cout << "The sum from " << start << " to " << s << " is : " << sum << endl;
    return 0;
}