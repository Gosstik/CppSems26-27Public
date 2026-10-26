#include <iostream>

int main() {
    // 0. implicit cast
    // 1. static_cast
    // 2. reinterpret_cast
    // 3. const_cast

    // 4. c-style cast
    // https://en.cppreference.com/cpp/language/explicit_cast
    // 4.1 const_cast
    // 4.2 static_cast
    // 4.3 const_cast<>(static_cast<>)
    // 4.4 reinterpret_cast
    // 4.5 const_cast<>(reinterpret_cast<>)

    double x = 10;
    int v1 = double(x);
    int v2 = (double)x;

    // 5. dynamic_cast
    // ???
}
