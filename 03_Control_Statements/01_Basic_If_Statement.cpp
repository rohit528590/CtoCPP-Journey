#include <iostream>
using namespace std;

int main()
{
    /*
     * BASIC IF STATEMENT
     *
     * The if statement executes code only when a condition is true.
     *
     * Syntax:
     * if (condition)
     * {
     *     // Code executes only if condition is true
     * }
     */

    int age;
    cout << "Enter your age : ";
    cin >> age;

    // Simple condition: check if age is 18 or above
    if (age >= 18)  // Code executes only if condition is true
    {
        cout << "You are eligible to vote!\n";
        // This line only executes if age >= 18 is true
    }

    cout << "Program continues regardless of condition result.\n";

    return 0;
}