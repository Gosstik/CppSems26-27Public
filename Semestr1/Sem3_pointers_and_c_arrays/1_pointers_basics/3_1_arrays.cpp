#include <iostream>
#include <vector>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    for (size_t i = 0; i < 5; ++i) {
        std::cout << a[i] << ' ';
    }

    std::vector<int> v(5);
    for (size_t i = 0; i < 5; ++i) {
        std::cout << v[i] << ' ';
    }
}
