// Program to calculate the sum of numbers within a given range using a while loop.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Sum of Range Program\n";
    int start, end, sum = 0;

    cout << "Enter the starting number : ";
    cin >> start;

    cout << "Enter the ending number : ";
    cin >> end;

    int temp = start;
    while (end >= start)
    {
        sum += start;
        start++;
    }

    cout << "The sum from " << temp << " to " << end << " is : " << sum << endl;
    return 0;
}