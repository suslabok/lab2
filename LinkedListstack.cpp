#include <iostream>
#include "LinkedListstack.h"
#include "../lab1/linkedlist.h"

void LinkedListstack::push(int element)
{
     addToHead(element);
}

void linkedliststack::pop()
{
    l.removeHead();
}

void linkedliststack::display()
{
    l.traverse();
}

bool linkedliststack::isEmpty()
{
    return l.isEmpty();
}

int linkedliststack::top()
{
    if (l.isEmpty())
    {
        std::cout << "\nthe stack is empty\n";
        return -1;
    }
    return l.head->info;
}
