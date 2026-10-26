#include <iostream>

// OK, CE, RE, UB ???

int main() {
    int x = 0;
    int* p = &x;
    int*& r = p;
    --r;
    *(++r) = 2;
    ++*p;
    std::cout << x << *p << *r << '\n';  // ???
}
