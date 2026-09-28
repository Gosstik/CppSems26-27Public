#include <iostream>
#include <vector>

int main() {
    {
        // C-array
        int a[5] = {1, 2, 3, 4, 5};
        int* pa = a;  // !!! array to pointer conversion
        // int ap[5] = pa;  // !!! CE
        int* p1 = &pa[1];
        int* p3 = &pa[3];

        std::cout << p3 - p1 << '\n';  // ???
        std::cout << *p1 << '\n';      // ???
    }

    {
        // std::vector
        std::vector<int> v = {1, 2, 3, 4, 5};
        int* p1 = &v[1];
        int* p3 = &v[3];
        std::cout << p1 - p3 << '\n';  // ???
        std::cout << *p1 << '\n';      // ???

        // .data()
        int* pd1 = v.data() + 1;  // == p1
        int* pd3 = v.data() + 3;  // == p3
    }
}
