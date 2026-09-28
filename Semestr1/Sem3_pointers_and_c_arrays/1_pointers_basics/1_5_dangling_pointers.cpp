#include <iostream>
#include <vector>

int main() {
    // Dangling pointer
    int a = 1;
    int* p = &a;

    {
        int b = 2;
        p = &b;
    }  // end of 'b' scope

    // std::cout << b << ' '; // CE
    std::cout << p << ' ';    // No UB, because no dereference
    std::cout << *p << '\n';  // UB, try O0 and O1 optimization
}
