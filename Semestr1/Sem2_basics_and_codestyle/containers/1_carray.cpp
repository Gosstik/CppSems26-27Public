#include <iostream>

// Arrays declaration:
// https://en.cppreference.com/w/cpp/language/array
// Arrays initialization:
// https://en.cppreference.com/w/c/language/array_initialization

int main() {
    // int a[3] = {1, 2, 3};
    // int b[3] = {};
    // int c[3];

    size_t n{};
    std::cin >> n;
    size_t n2 = 5 + 10;

    const size_t n = 3; // uint64_t
    // std::cin >> n;
    int d[n2];

    for (size_t i = 0; i < 2; ++i) {
        std::cin >> d[i];
    }

    std::cout << d[0] << ' ' << d[1] << '\n';
}
