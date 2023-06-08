#include "static/algo.h"
#include "static/DataStructures.h"
#include <iostream>

int main(int argc, char *argv[])
{
    int arr[7] = {5, 4, 3, 6, 9, 2, 1};
    insertSort(arr, 7);
    for(const auto &var : arr)
    {
        std::cout << "element is " << var << std::endl;
    }
    return 0;
}
