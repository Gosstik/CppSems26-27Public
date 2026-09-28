#include <iostream>

void Foo() {
    int a = 1;
    static int b = 1;

    ++a;
    ++b;

    std::cout << a << ' ' << b << '\n';
}

int main() {
    Foo();
    Foo();
    Foo();

    // std::cout << Foo::b; // CE
}
