#include <iostream>
#include "hello.h"

void Haters::f() {}; // this will export
int Haters::c = 0; // this will export

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
