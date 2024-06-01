#include <iostream>
#include "../include/linkedlistqueue.h"

int main(){
    linkedlistqueue lq;
    
    std::cout << "\nlet's push some element on the stack\n";
    lq.enqueue(1);
    lq.enqueue(2);
    lq.enqueue(3);
    
    std::cout << "\nthe front element is:\n";
    std::cout << lq.front() << "\n";

      std::cout << "\nthe rear element is:\n";
    std::cout << lq.back() << "\n";

    std::cout << "\nlet's view the list\n";
    lq.display();
    std::cout << "\n";
    
    std::cout << "\nlet's dequeue element\n";
    lq.dequeue();

    std::cout << "\nlet's view the list\n";
    lq.display();
    
    std::cout << "\nthe front element is:\n";
    std::cout << lq.front() << "\n";

    std::cout << "\nthe rear element is:\n";
    std::cout << lq.back() << "\n";

    
    return 0;

}
