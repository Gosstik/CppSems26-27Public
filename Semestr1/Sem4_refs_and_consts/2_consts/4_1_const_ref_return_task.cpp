#include <iostream>

const int& Foo(const int& x) {
    std::cout << x << '\n';  // ???
    return x;
}

int main() {
    int x = Foo(5);
    std::cout << x << '\n';  // ???
}
