/*
 Program to taking a student's percentage as input and print the corresponding grade using nested if statements:
    • 90 - 100: Excellent
    • 80 - 89: Very Good
    • 70 - 79: Good
    • 60 - 69: Can Do Better
    • 50 - 59: Average
    • 40 - 49: Below Average
    • Below 40: Fail
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Student Grade Calculator\n";
    float marks;
    
    cout << "Enter Your Marks : ";
    cin >> marks;

    if (marks >= 70)
    {
        if (marks >= 90)
        {
            cout << "Excellent\n";
        }
        else if (marks >= 80)
        {
            cout << "Very Good\n";
        }
        else
        {
            cout << "Good\n";
        }
    }

    else if (marks >= 40)
    {
        if (marks >= 60)
        {
            cout << "Can Do Better\n";
        }
        else if (marks >= 50)
        {
            cout << "Average\n";
        }
        else
        {
            cout << "Below Average\n";
        }
    }
    
    else
    {
        cout << "Fail\n";
    }
    
    return 0;
}