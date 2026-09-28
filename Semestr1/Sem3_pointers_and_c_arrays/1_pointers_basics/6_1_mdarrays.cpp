#include <iostream>
#include <vector>

int main() {
    int a1[3] = {1, 2, 3};
    // 2-dim C-array
    int a2[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };

    // a1[i] == *(a1 + i)
    std::cout << a1[1] << '\n';

    // a2[i][j] == *(a2 + i * 4 + j)
    std::cout << a2[1][3] << '\n';

    for (size_t i = 0; i < 3; ++i) {
        for (size_t j = 0; j < 4; ++j) {
            std::cout << a2[i][j] << ' ';
        }
    }

    // 2-dim vector
    std::vector<std::vector<int>> v(3, std::vector<int>(4));
    for (size_t i = 0; i < 3; ++i) {
        for (size_t j = 0; j < 4; ++j) {
            std::cout << a2[i][j] << ' ';
        }
    }
}
