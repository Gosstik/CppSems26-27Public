#include <iostream>

int main() {
    // void - incomplete type
    // Any pointer can be casted to void*

    void a;    // CE
    void* vp;  // OK

    int i;
    int* pi = &i;
    vp = &i;  // OK

    bool b;
    vp = &b;  // OK
    pi = &b;  // CE

    std::cout << sizeof(p);
    std::cout << *pi << '\n';  // OK
    std::cout << *p << '\n';   // CE, unable to dereference void*
}
