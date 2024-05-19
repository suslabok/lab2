#pragma once
#include "linkedlist.h"
#include "stack.h"

class linkedliststack : public stack
{
private:
    LinkedList l;

public:
    linkedliststack(){};
    ~linkedliststack(){};

    void push(int element);
    int pop();
    void display();
    bool isEmpty();
    int top();
};

