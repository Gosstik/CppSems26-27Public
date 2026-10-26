#include <iostream>

int main() {
    // static_cast
    double x = 1;
    int64_t i = static_cast<int64_t>(x);
    std::cout << i << '\n';

    // reinterpret_cast
    int64_t dx = reinterpret_cast<int64_t&>(x);
    std::cout << dx << '\n';

    int64_t* pdx = reinterpret_cast<int64_t*>(&x);
    std::cout << *pdx << '\n';

    // int vdx = reinterpret_cast<int>(x); // CE
}
