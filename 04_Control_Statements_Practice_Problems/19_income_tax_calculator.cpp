// Calculate the income tax paid by an employee to the government according to the following tax slabs:
//     Income Slab          Tax Rate
//     2.5L - 5.0L         5%
//     5.0L - 10.0L        20%
//     Above 10.0L         30%
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Income Tax Calculator\n";
    int income;
    float tax = 0;

    cout << "Enter Your Income : ";
    cin >> income;

    if (income <= 250000)
    {
        tax = 0;
    }

    else if (income > 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }

    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
    }

    else
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
    }
    cout << "The total tax you need to pay is " << tax << endl;

    return 0;
}