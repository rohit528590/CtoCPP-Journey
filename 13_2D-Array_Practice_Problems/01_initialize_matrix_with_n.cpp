// Program to initialize every element of a 2D matrix with the value N, where the matrix dimensions (rows and columns) 
// are provided by the user.
#include <iostream>
using namespace std;

int main()
{
    int rows, cols, fill_value;

    // Prompt the user for matrix dimensions and fill value

    cout << "Enter the number of rows in the matrix : ";
    cin >> rows;

    cout << "Enter the number of columns in the matrix : ";
    cin >> cols;

    cout << "Enter the value to store in each element of the matrix : ";
    cin >> fill_value;

    // Create and initialize matrix
    int matrix[rows][cols];

    cout << "Generated Matrix -:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = fill_value;
            cout << matrix[i][j] << " ";
        }

        cout << "\n";
    }

    return 0;
}