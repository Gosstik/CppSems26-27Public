#include <iostream>

// clang-format off

// clang++ -std=c++20 -fsanitize=address,undefined -Wall -Wextra -pedantic

// https://en.cppreference.com/w/cpp/language/reference_initialization#Lifetime_of_a_temporary
// https://eel.is/c++draft/class.temporary#6.10
// https://eel.is/c++draft/intro.execution#5
// 5.4 init-declarator
// + For an initializer, performing the initialization of the entity (...) is also considered part of the full-expression.

// clang-format on

const int& Foo(const int& x) {
    std::cout << x << '\n';  // 5
    return x;
}

int main() {
    int x = Foo(5);
    std::cout << x << '\n';  // 5
}
