#pragma once
#include "stack.h"

class LinkedListStack : public Stack {
private:
    LinkedList list;  

public:
    LinkedListStack() {}
    ~LinkedListStack() {}

    void push(int element);
    void pop();
    bool isEmpty();
    int top();
};
