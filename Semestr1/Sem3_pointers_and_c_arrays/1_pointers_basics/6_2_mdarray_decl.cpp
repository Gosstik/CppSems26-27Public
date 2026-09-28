#include <iostream>

int main() {
    int a2[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };

    // d2[][4] is d2[2][4]
    int d1[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
    };

    // CE: all dimensions except the outer one should have fixed size
    int d2[2][] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
    };

    int md1[2][3][4]{};  // OK
    int md2[][3][4]{};   // OK
    // int md3[2][][4]{}; // CE
    // int md3[2][3][]{}; // CE
}
