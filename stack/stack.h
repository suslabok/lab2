#pragma once

class stack {
public:
    stack() {}
    virtual ~stack() {} // Virtual destructor

    virtual void push(int element) = 0;
    virtual void pop() = 0;
    virtual void display() = 0;
    virtual bool isEmpty() = 0;
    virtual int top() = 0;
};
