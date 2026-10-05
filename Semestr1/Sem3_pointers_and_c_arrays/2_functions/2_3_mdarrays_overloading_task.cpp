#include <iostream>

// 1
void Bar(int**) {
    std::cout << 1 << '\n';
}

// 2
void Bar(int (*)[3]) {
    std::cout << 2 << '\n';
}

// 3
void Bar(int[3][3]) {
    std::cout << 3 << '\n';
}

// 4
void Bar(int[][3]) {
    std::cout << 4 << '\n';
}

// 5
void Bar(int[3][]) {
    std::cout << 5 << '\n';
}

int main() {
    int a[3][3]{};
    Bar(a);  // ???

    int (*b2)[3] = a;
    Bar(b2);  // ???

    int x[3];
    Bar(&x);  // ???

    int* px = x;
    Bar(&px);  // ???
}
