#include <iostream>

// Object Pointer Type: https://eel.is/c++draft/basic.compound#3
// Pointer Arithmetic: https://eel.is/c++draft/expr.add#4.2

int main() {
    int x = 0;
    int* p = &x;
    int*& r = p;
    --r;  // UB: attempts to form a pointer before the beginning of x
    ++r;
    --*r;
    ++*p;
    std::cout << x << *p << *r << '\n';  // ...
}
