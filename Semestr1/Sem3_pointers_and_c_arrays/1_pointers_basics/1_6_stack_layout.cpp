#include <iostream>
#include <vector>

int main() {
    int c = 3, d = 4, e = 5, f = 6;
    std::cout << &c << ' ' << &d << ' ' << &e << ' ' << &f << '\n';

    int* p = &c;
    ++p;  // UB
    std::cout << *p << '\n';
}
