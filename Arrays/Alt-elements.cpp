/*
    Question:
    Given an array of integers, swap every two adjacent elements.
    If the array has an odd number of elements, the last element remains unchanged.

    Approach:
    1. Determine the size of the array.
    2. Check if (size - 1) is even.
    3. If true, iterate and swap adjacent elements until the second-last element.
    4. If false, iterate and swap all possible pairs.
    5. Print the modified array.
*/

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 4, 6, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp = 0;

    if ((size - 1) % 2 == 0)
    {
        for (int i = 0; i < size; i++)
        {
            if (i == size - 1)
            {
                break;
            }
            if (i % 2 == 0)
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            if (i % 2 == 0)
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    printArray(arr, size);
    return 0;
}
