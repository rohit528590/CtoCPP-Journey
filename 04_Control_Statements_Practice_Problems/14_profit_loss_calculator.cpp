// Program to determine whether the seller has made a profit or incurred a loss. Also calculate the amount of profit made or loss incurred.
#include<iostream>
using namespace std;

int main()
{
    cout << "Welcome to Profit/Loss Calculator\n";
    float cost_price, selling_price;
    
    cout << "Enter the cost price : ";
    cin >> cost_price;
    
    cout << "Enter the selling price : ";
    cin >> selling_price;

    if (selling_price > cost_price)
    {
        cout << "You made a Profit of : " << selling_price - cost_price << ".\n";
    }

    else if (cost_price > selling_price)
    {
        cout << "You incurred a Loss of : " << cost_price - selling_price << ".\n";
    }

    else
    {
        cout << "No Profit or Loss. Both Cost Price and Selling Price are equal (" << cost_price << " = " << selling_price << ").\n";
    }

    return 0;
}