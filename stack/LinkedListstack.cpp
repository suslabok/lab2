#include <iostream>
#include "LinkedListstack.h"

void LinkedListstack::push(int element)
{
    list.addToHead(element);
}

void LinkedListstack::pop()
{
    list.removeHead();
}

void LinkedListstack::display()
{
    list.traverse();
}

bool LinkedListstack::isEmpty()
{
    return list.isEmpty();
}

int LinkedListstack::top()
{
    if (isEmpty())
    {
        std::cout << "\nThe stack is empty\n";
        return -1; // Return some default value indicating error
    }
    return list.getHead()->info;  
}