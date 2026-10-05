#include <iostream>

void Foo(int c) {
    static int a = c;

    std::cout << "Foo called with a=" << a << "\n";
}

int main() {
    Foo(10);
    Foo(20);
}
