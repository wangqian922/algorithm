#include <iostream>

int add(int x, int y);
int main(int argc, const char *argv[])
{
    std::cout << "Hello C++ " << __cplusplus << std::endl;
    std::cout << "add " << add(1, 2) << std::endl;
}