#include <iostream>

// How to choose overload?
// 1. Exact match
// 2. Promotion
// 3. Convertion

// Promotions and convertions:
// https://cppreference.com/w/cpp/language/implicit_cast.html

// Integer promotion
// bool, signed char, short -> int
// char, unsigned char, unsigned short -> int (unsigned int)

// !!! These are convertions
// int -> long
// int -> long long

// Floating-point promotion
// float -> double

// Difference of promotion and convertion:
// Promotion saves value, while convertion may cause loss of precision

void Foo(int) { std::cout << 1 << '\n'; }

void Foo(long long) { std::cout << 2 << '\n'; }

int main() {
    int a;
    long b;

    Foo(a);  // OK
    // Foo(b); // CE

    Foo(1);    // OK
    Foo(1ll);  // OK
}
