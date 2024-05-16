#pragma once
#include "linkedlist.h"
#include "queue.h"

class linkedlistqueue : public Queue
{
    public:
        linkedlistqueue(){}
        ~linkedlistqueue(){}    

        void enqueue(int element);
        void dequeue();
        bool isEmpty();
        bool isFull();
        int front();
        int back();
        void display();
    
    private:
    LinkedList lq;
};
