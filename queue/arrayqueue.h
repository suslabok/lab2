#include "queue.h"

class Arrayqueue : public Queue
{
    private:
        int *data;
        int frontIndex;
        int rearIndex;
        int maxQueueSize;

    public:
        Arrayqueue(int size)
            : maxQueueSize(size),
            frontIndex(-1),
            rearIndex(-1),
            data(new int[size])
            {}
        ~Arrayqueue() { delete[] data; }

    void enqueue(int element);
    void dequeue();
    bool isEmpty();
    bool isFull();
    int front();
    int back();
    void display();
};

