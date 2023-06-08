#include "static/algo.h"
#include "static/DataStructures.h"
#include <iostream>

int main(int argc, char *argv[])
{
    int arr[5] = {5, 4, 3, 2, 1};
    bubbleSort(arr, 5);
    for(const auto &var : arr)
    {
        std::cout << "element is " << var << std::endl;
    }
    return 0;
}
