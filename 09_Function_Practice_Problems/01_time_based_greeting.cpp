// Function to print a greeting based on the time of day ("Good Morning", "Good Afternoon", "Good Evening").
#include <iostream>
using namespace std;

void printGreetingBasedOnTime(char timeCode)
{
    if (timeCode == 'M')
    {
        cout << " Good Morning\n";
    }

    else if (timeCode == 'A')
    {
        cout << " Good Afternoon\n";
    }

    else if (timeCode == 'N')
    {
        cout << " Good Night\n";
    }

    else
    {
        cout << " Invalid input. Please enter 'M', 'A', or 'N'.\n";
    }
}

int main()
{
    char timeCode;
    cout << "Enter the time of day (M = Morning, A = Afternoon, N = Night) : ";
    cin >> timeCode;
    
    printGreetingBasedOnTime(timeCode); // Function call
    
    return 0;
}