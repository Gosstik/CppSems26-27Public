#include <iostream>

int main() {
    int x = 0;
    int* p = &x;
    int*& r = ++p;
    --r;            // OK: p == &x
    ++r;            // OK: p == &x + 1
    --*r;           // UB: accesses an int through a one-past pointer
    ++*p;
    std::cout << x << *p << *r << '\n';  // ...
}
