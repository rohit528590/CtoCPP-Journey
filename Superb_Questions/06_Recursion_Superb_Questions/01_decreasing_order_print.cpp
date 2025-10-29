// Recursive function to print numbers in decreasing order from x down to 1.
#include <iostream>
using namespace std;

void printDecreasing(int x) 
{
    
   if (x < 1) return;

   cout << x << " ";
   printDecreasing(x - 1);

   return;
}

int main()
{
    int maxNumber;

    cout << "Enter your maximum number to start from : ";
    cin >> maxNumber;

    // Handle invalid ranges/Edge cases
    if (maxNumber < 1)
    {
        cout << "Please enter a positive integer.\n";
        return 0;
    }
    
    cout << "Decreasing order from " << maxNumber << " to 1 : ";
    printDecreasing(maxNumber);

    cout << endl;
    return 0;
}