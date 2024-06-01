#include <iostream>
#include "../include/linkedliststack.h"

int main(){
    linkedliststack ls;
    ls.push(1);
    ls.push(2);
    ls.push(3);
    std::cout << "the top lement is:\n";
    std::cout << ls.top() << "\n";
    std::cout << "let's view the list\n";
    ls.display();
    ls.pop();
    std::cout << "let's view the list\n";
    ls.display();
    std::cout << "the top element is:\n";
    std::cout << ls.top() << "\n";
    return 0;
}
