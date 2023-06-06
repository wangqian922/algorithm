#ifndef __DATASTRUCTURE_H__
#define __DATASTRUCTURE_H__

#include <vector>

typedef int elemType;

// 顺序栈
class sqStack
{
public:
    int top;
    std::vector<elemType> elemArr;

    sqStack();

    void traverse();
    void sqPush(elemType elem);
    elemType sqPop();
    bool isEmpty();
};

#endif
