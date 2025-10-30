// Program to find the maximum element in a 2D array.
#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
 
    cout << "Enter the number of rows in the matrix : ";
    cin >> rows;

    cout << "Enter the number of columns in each row : ";
    cin >> cols;

    int matrix[rows][cols];
    int maxValue;

    // Input matrix elements and find the maximum
    cout << "Enter all " << rows * cols << " elements of the matrix -:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];

            // Initialize the maximum value with the first element
            if (i == 0 && j == 0)  maxValue = matrix[i][j];
            
            // Update the maximum value if a larger element is found
            else if (matrix[i][j] > maxValue) maxValue = matrix[i][j];

        }

    }

    // Output the maximum value
    cout << "The maximum element in the matrix is : " << maxValue << endl;

    return 0;
}