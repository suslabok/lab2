#include <iostream>
#include "linkedliststack.h"

int main(){
    linkedliststack ls;

    std::cout << "\nlet's push some element on the stack\n";
    ls.push(1);
    ls.push(2);
    ls.push(3);

    std::cout << "\nthe top lement is:\n";
    std::cout << ls.top() << "\n";

    std::cout << "\nlet's view the list\n";
    ls.display();
    std::cout << "\n";
    
    std::cout << "\nlet's pop the top element\n";
    ls.pop();

    std::cout << "\nlet's view the list\n";
    ls.display();
    
    std::cout << "\nthe top element is:\n";
    std::cout << ls.top() << "\n";

    
    return 0;
}
