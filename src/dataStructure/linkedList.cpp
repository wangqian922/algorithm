#include "static/DataStructures.h"

void Linkedlist::insertNode(elemType value, unsigned index)
{
    int length = getLength();
    if (index > length)
    {
        throw std::runtime_error("index is out of length");
    }

    Node *newNode = new Node(value);
    Node *cur = header;
    while (index > 0)
    {
        cur = cur->next;
        index--;
    }

    if (cur->next != nullptr)
    {
        Node* nextNode = cur->next;
        cur->next = newNode;
        newNode->next = nextNode;
    }
    else
    {
        cur->next = newNode;
    }
}

int Linkedlist::getLength()
{
    int length = 0;
    Node *cur = header->next;
    while (cur != nullptr)
    {
        length++;
        cur = cur->next;
    }

    return length;
}

void Linkedlist::traverse()
{
    Node *cur = header;
    while (cur->next != nullptr)
    {
        cur = cur->next;
        std::cout << "List has element " << cur->value << std::endl;
    }
}

elemType Linkedlist::deteleNode(unsigned index)
{
    if (index > getLength())
    {
        throw std::runtime_error("index out of size");
    }
    
    Node* cur = header;
    while (index > 0)
    {
        cur = cur->next;
        index--;
    }

    Node* beDeletedNode = cur->next;
    elemType deteleValue = beDeletedNode->value;
    cur->next = beDeletedNode->next;
    delete beDeletedNode;
    return deteleValue;
}

elemType Linkedlist::serachValue(unsigned index)
{
    if (index > getLength())
    {
        throw std::runtime_error("index out of size");
    }

    Node* cur = header;
    while (index > 0)
    {
        cur = cur->next;
        index--;
    }

    return cur->next->value;
}