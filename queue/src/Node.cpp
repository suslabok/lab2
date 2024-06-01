#include "../include/linkedlist.h"
 
bool LinkedList::isEmpty(){
    return head == nullptr;
}

void LinkedList::addToHead(int data){
    Node* newnode = new Node;
    newnode->info = data;
    newnode->next = head;
    head = newnode;
    if(tail == NULL){
        tail = head;
    }
}

void LinkedList::addToTail(int data){
    Node* newnode = new Node;
    newnode->info = data;
    newnode->next = nullptr;
    if (tail == nullptr){
        head = tail = newnode;
    } 
    tail-> next = newnode;
    tail = newnode;
}

void LinkedList ::add(Node* predecessor, int data){
    if(predecessor == nullptr){
        std::cout<<"\nthe predecessor is null\n";
        return;
    }
    Node* newnode = new Node;
    newnode-> info = data;
    newnode->next = predecessor->next;
    predecessor->next = newnode;
}

void LinkedList::removeHead(){
    if(isEmpty()){
        std::cout<<"\nthe list is empty\n";
        return;
    }
    if(head == tail){
        delete head;
        head = tail = nullptr;
    } else {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void LinkedList::removeTail(){
    if(isEmpty()){
        std::cout<<"\nthe list is empty\n";
        return;
    }
    if (head == tail){
        delete tail;
        head = tail = nullptr;
    }
    else{
        Node* temp;
        for(temp=head; temp!=NULL; temp=temp->next){
            if(temp->next == tail){
                delete tail;
                temp->next = nullptr;
                tail = temp;
            }
        }
    }
}

void LinkedList::remove(int data) {
    if (isEmpty()) {
        std::cout << "\nList is empty. Cannot remove.\n";
        return;
    }
    Node* temp = head;
    Node* prev = nullptr;
    while (temp != nullptr) {
        if (temp->info == data) {
            if (prev == nullptr) {
                removeHead();
            }
            else if (temp == tail) {
                removeTail();
            }
            else {
                prev->next = temp->next;
                delete temp;
            }
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    std::cout << "\nElement " << data << " not found.\n";
}

void LinkedList :: traverse(){
    Node* trav;
    if (isEmpty()){
        std::cout<<"\nthe list is empty\n";
        return;
    }
    std::cout<<"\n here is the list";
    for(trav = head; trav!=NULL; trav = trav->next){
        std::cout<<trav->info<<std::endl;
    }

}

bool LinkedList::retrieve(int data, Node*& dataOutPtr) {
    Node* retri;
    for (retri = head; retri != NULL; retri = retri->next) {
        if (retri->info == data) {
            dataOutPtr = retri;
            return true;
        } else if (retri->next == NULL) {
            return false;
        }
    }
    return false;
}

bool LinkedList::search(int data) {
    Node* temp;
    for (temp = head; temp != NULL; temp = temp->next) {
        if (temp->info == data) {
            return true;
        } else if (temp->next == NULL) {
            return false;
        }
    }
    return false;  
}
