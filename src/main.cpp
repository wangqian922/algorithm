#include "static/algo.h"
#include <iostream>

int main(int argc, char *argv[])
{
    int arr1[5] = {5, 4, 3, 2, 1};
    for(const auto &element : arr1)
    {
        std::cout << "there is elemnt in arr1 before sort "<< element << std::endl;
    }
    bubbleSort(arr1, 5);
    for(const auto &element : arr1)
    {
        std::cout << "there is elemnt in arr1 "<< element << std::endl;
    }
    return 0;
}
