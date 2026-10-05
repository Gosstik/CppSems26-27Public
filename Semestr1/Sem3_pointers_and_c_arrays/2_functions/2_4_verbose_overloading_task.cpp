#include <iostream>

int Foo(int (*a[3])[5]) { std::cout << 1 << '\n'; }

int main() {
    int a1[3][5];
    Foo(a1);  // ???

    int (**a2)[5];
    Foo(a2);  // ???

    int (*a3[4])[5];
    Foo(a3);  // ???
}
