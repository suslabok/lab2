#include <iostream>
#include "arrayqueue.h"
int main(){
    Arrayqueue aq(5);
    
    std::cout << "\nlet's push 1,2,3 on the stack\n";
    aq.enqueue(1);
    aq.enqueue(2);
    aq.enqueue(3);
    
    std::cout << "\nthe front element is:\n";
    std::cout << aq.front() << "\n";

      std::cout << "\nthe rear element is:\n";
    std::cout << aq.back() << "\n";

    std::cout << "\nlet's view the list\n";
    aq.display();
    std::cout << "\n";
    
    std::cout << "\nlet's dequeue element\n";
    aq.dequeue();

    std::cout << "\nlet's view the list\n";
    aq.display();
    
    std::cout << "\nthe front element is:\n";
    std::cout << aq.front() << "\n";

    std::cout << "\nthe rear element is:\n";
    std::cout << aq.back() << "\n";

    
    return 0;
}
