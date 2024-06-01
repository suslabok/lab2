#include <iostream>
#include "../include/linkedliststack.h"
#include "../include/linkedlist.h"

void linkedliststack::push(int element)
{
    l.addToHead(element);
}

int linkedliststack::pop()
{

    int element=l.head->info;
     l.removeHead();
     return element;
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
