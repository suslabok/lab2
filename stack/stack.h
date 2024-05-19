#pragma once
#ifndef Stack_h
#define Stack_h

class stack{
    public:
        stack(){};
        ~stack(){};
        virtual void push(int element)=0;
        virtual int pop()=0;
        virtual void display()=0;
        virtual bool isEmpty()=0;
        virtual int top()=0;
};
#endif
