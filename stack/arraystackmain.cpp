#include <iostream>
#include "arraystack.h"

int main(){
    ArrayStack as(5);
    std::cout << "ArrayStack created\n";
    std::cout << "Pushing 1, 2, 3\n";
    as.push(1);
    as.push(2);
    as.push(3);

    std::cout <<"top element is: " << as.top() << "\n";

    std::cout << "Displaying stack\n";
    as.display();

    std::cout << "Popping\n";
    as.pop();

    std::cout <<"top element is: " << as.top() << "\n";

    std::cout << "Displaying stack\n";  
    as.display();

    return 0;
}
