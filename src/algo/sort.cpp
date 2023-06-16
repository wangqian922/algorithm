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

void seleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int maxIndex = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        std::swap(arr[i], arr[maxIndex]);
    }
}

void insertSort(int arr[], int size)
{
    
    for (int i = 1; i < size; i++)
    {
        int sorted = arr[i];
        int j = i - 1;
        while (sorted < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = sorted;
    }
}

void quickSort(int arr[], int size)
{
    std::cout << "quickSort wait for code!!!" << std::endl;
}
