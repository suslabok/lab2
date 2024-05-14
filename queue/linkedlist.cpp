#include <iostream>
#include "linkedlistqueue.h"

void linkedlistqueue ::enqueue(int element)
{
    lq.addToTail(element);
}

void linkedlistqueue ::dequeue()
{
    lq.removeHead();
}

bool linkedlistqueue ::isEmpty()
{
    return lq.isEmpty();
}

bool linkedlistqueue ::isFull()
{
    return false;
}

int linkedlistqueue ::front()
{
    if (lq.isEmpty())
    {
        std::cout << "\nthe queue is empty\n";
        return -1;
    }
    return lq.head->info;
}

int linkedlistqueue::back(){
    if(lq.isEmpty()){
        std::cout<<"\nthe queue is empty\n";
        return -1;
    }
    return lq.tail->info;
}

void linkedlistqueue::display(){
    lq.traverse();
}
