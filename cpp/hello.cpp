#include <iostream>
#include <ostream>
#include "hello.h"

class B {
public:
    B() {};
    int b;
    // virtual void c() = 0;
};

class C {
public:
    int c;
};

class  A: public B, public C{
public:
    A() {};
    int a;
    // virtual void c();
};

// Memory layout
// A
// B       C
// int b   int c   int a

int main() {
    A a;
    B *b = &a;
    C *c = &a;

    std::cout << - (unsigned long long)(&a) + (unsigned long long)b << - (unsigned long long)(&a) + (unsigned long long)c  << std::endl;

    std::cout << sizeof(A) << std::endl;
}
