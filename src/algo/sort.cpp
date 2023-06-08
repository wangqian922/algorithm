#include <iostream>
#include <algorithm>

void bubbleSort(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
            else
                break;
        }
    }
}

