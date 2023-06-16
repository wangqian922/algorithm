#include "static/DataStructures.h"

sqStack::sqStack() 
{
    top = 0;
    std::cout << " sqstack init down " << std::endl;
}

void sqStack::traverse()
{
    for (auto i = 0; i < top; i++)
    {
        std::cout << "sqstack has" << elemArr[i] << std::endl;
    }
}

void sqStack::sqPush(elemType elem)
{
    elemArr.push_back(elem);
    top++;
}

bool sqStack::isEmpty()
{
    return elemArr.empty();
}

elemType sqStack::sqPop()
{
    elemType end = elemArr.back();
    
    elemArr.pop_back();

    return end;
}