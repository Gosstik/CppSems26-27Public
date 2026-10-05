#include <iostream>

void Foo() {
    int a = 1;
    static int foo_calls_count = 0;

    ++a;
    ++foo_calls_count;

    std::cout << "Foo called " << foo_calls_count << " times, a=" << a << "\n";
}

int main() {
    Foo();
    Foo();

    // std::cout << Foo::foo_calls_count; // CE
}
