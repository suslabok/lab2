#include "../include/arrayqueue.h"
#include <iostream>

bool Arrayqueue::isEmpty()
{
    return frontIndex == -1;
}

bool Arrayqueue::isFull(){
    return (rearIndex + 1)%maxQueueSize == frontIndex;
}
/* void enqueue(int element);
    void dequeue();
    bool isEmpty();
    bool isFull();
    int front();
    int back();
    void display();*/

void Arrayqueue::enqueue(int element)
{
    if (isFull())
    {
        std::cout << "Queue is full\n";
        return;
    }
    if (frontIndex == -1)
    {
        frontIndex = 0;
    }
    rearIndex = (rearIndex + 1) % maxQueueSize;
    data[rearIndex] = element;
}

void Arrayqueue::dequeue(){
    if(isEmpty()){
        std::cout << "Queue is empty\n";
        return;
    }
    if(frontIndex == rearIndex){
        frontIndex = -1;
        rearIndex = -1;
        return;
    }
    frontIndex = (frontIndex + 1)%maxQueueSize;
}

int Arrayqueue::front(){
    if(isEmpty()){
        std::cout << "Queue is empty\n";
        return -1;
    }
    return data[frontIndex];
}

int Arrayqueue::back(){
    if(isEmpty()){
        std::cout << "Queue is empty\n";
        return -1;
    }
    return data[rearIndex];
}

void Arrayqueue::display(){
    if(isEmpty()){
        std::cout << "Queue is empty\n";
        return;
    }
    int i = frontIndex;
    while(i != rearIndex){
        std::cout << data[i] << " ";
        i = (i + 1)%maxQueueSize;
    }
    std::cout << data[rearIndex] << std::endl;
}
