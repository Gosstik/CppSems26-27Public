#include <iostream>
#include <array>


int main() {
    std::array<int, 10> a;
    std::cout << a.size() << '\n';
    std::cout << a.empty();
    std::cout << a[1];
    a.push_back(1);
    for (int e: a) {
        std::cout << e << ' ';
    }

}
