#include <iostream>
#include "hello.h"

template <class T>
void b(T) {
    
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    b<int>(5); 
    b<char>('5');
    return 0;
}
