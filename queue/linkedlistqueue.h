#pragma once
#include "../lab1/Linkedlist.h"
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


