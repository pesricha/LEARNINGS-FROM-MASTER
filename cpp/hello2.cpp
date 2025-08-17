#include "hello.h"

void l() {
    // b<float>(0.0); // Cannot use as not declared in hello.cpp, no on exporting
    b<char>(0.0); 
}