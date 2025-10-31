#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter size of the array : ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements of the array -:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sort Technique
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array -:\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
    return 0;
}