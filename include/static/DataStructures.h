#ifndef __DATASTRUCTURE_H__
#define __DATASTRUCTURE_H__

#include <iostream>
#include <vector>
#include <memory>

typedef int elemType;

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

class Node
{
public:
    elemType value;
    Node *next;

    Node(elemType value) : value(value), next(nullptr){};
};

class Linkedlist
{
public:
    Node *header = nullptr;
    Linkedlist()
    {
        header = new Node(0);
        header->next = nullptr;
    };
    ~Linkedlist()
    {
        delete header;
    }

    void insertNode(elemType value, unsigned index);
    int getLength();
    void traverse();
    elemType deteleNode(unsigned index);
    elemType serachValue(unsigned index);
};

class LinkedQueue : Linkedlist
{
public:
    Node *front;
    Node *rear;

    LinkedQueue()
    {
        front = rear = header;
    }

    void Enqueue(elemType value);
    elemType Dequeue();
    int getSize();
    bool isEmpty();
};

class treeNode
{
public:
    elemType value;
    std::vector<std::shared_ptr<treeNode>> children;

    treeNode(elemType value) : value(value){};
};

class Tree
{
public:
    std::shared_ptr<treeNode> rootNode;

    Tree() : rootNode(nullptr){};
};

class BinaryTreeNode
{
public:
    elemType value;
    std::shared_ptr<BinaryTreeNode> left;
    std::shared_ptr<BinaryTreeNode> right;

    BinaryTreeNode(elemType value) : value(value){};
};

class BinaryTree
{
public:
    std::shared_ptr<BinaryTreeNode> root;

    BinaryTree() : root(nullptr){};

    static void preorderTraverse(std::shared_ptr<BinaryTreeNode> root);
    static void ineorderTraverse(std::shared_ptr<BinaryTreeNode> root);
    static void posteorderTraverse(std::shared_ptr<BinaryTreeNode> root);    
};

class heap
{
public:
    heap(/* args */);
};

void testBinaryTree();
void testQueue();

#endif
