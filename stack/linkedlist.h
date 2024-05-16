#pragma once
#include <iostream>

class Node{
public:
    int info;
    Node* next;
};

class LinkedList{
    public:
        Node* head;
        Node* tail;
        LinkedList(): head(nullptr), tail(nullptr){};
        ~LinkedList(){};

        bool isEmpty();
        void addToHead(int data);
        void addToTail(int data);
        void add(Node* predecessor, int data);
        void removeHead();
        void remove(int data);
        void removeTail();
        bool retrieve(int data, Node*&dataOutPtr);
        void traverse();
        bool search(int data);
};
