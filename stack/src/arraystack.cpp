#include "../include/arraystack.h" 
#include <iostream>

bool ArrayStack::isEmpty()
{
    return topIndex < 0;
}

bool ArrayStack::isFull()
{
    return topIndex == maxStackSize - 1;
}

void ArrayStack::push(int element)
{
    if (isFull())
    {
        std::cout << "\nStack is full\n";
        return;
    }
    topIndex++;
    data[topIndex] = element;
}

int ArrayStack::pop()
{
    if (isEmpty())
    {
        std::cout << "\nStack is empty\n";
      return -1;
    }
    topIndex--;
    return data[topIndex];
}

int ArrayStack::top() {
    if(isEmpty()) {
        std::cout << "Stack is empty!\n";
        return 0;
    } 
    return data[topIndex];
}

void ArrayStack::display()
{
    if (isEmpty())
    {
        std::cout << "\nStack is empty\n";
        return;
    }
    for (int i = 0; i <= topIndex; i++)
    {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}
