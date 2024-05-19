#include "stack.h"
class ArrayStack : public stack {
    private:
        int *data;
        int topIndex;
        int maxStackSize;
    public:

       ArrayStack(int size)
            : maxStackSize(size),
            topIndex(-1),
            data(new int[size])
            {}
        ~ArrayStack() { delete[] data; }

        void push(int element);
        int pop();
        void display();
        bool isEmpty();
        int top();
        bool isFull();
};
