#include <iostream>

int main() {
    // 2-dim ptr

    int i = 0;
    int* pi = &i;
    // int* p = new int();
    std::cout << pi << '\n';  // address

    int** ppi = &pi;
    std::cout << ppi << '\n';  // also address
    std::cout << (*ppi == pi) << (**ppi == i) << '\n';

    ////////////////////////////////////////////////////////////////////////////

    // 2-dim array

    int d[3][4]{};
    int* pd = d[1];
    std::cout << pd[2] << '\n';  // pd[2] == d[1][2]

    // int** ppd1 = d; // CE
    int (*ppd2)[4] = d;  // OK, 4 is required for correct indexing

    ////////////////////////////////////////////////////////////////////////////

    // 1-dim array

    // !!!
    int a[5];
    int* pa = a;          // OK
    int** ppa1 = &a;      // CE
    int** ppa2 = &pa;     // OK
    int (*ppa3)[5] = &a;  // OK

    ////////////////////////////////////////////////////////////////////////////

    // 1-dim pointer array

    int* t[5];         // array of 5 pointers to int
    int (*t2)[5] = t;  // CE, pointer to array of 5 ints
    int** pt = t;      // OK
}
