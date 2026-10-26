#include <iostream>

// OK, CE, RE, UB ???

int main() {
    int x = 1;

    int& y = x;
    double& z = x; // CE
    // const double& z = x;

    ++x;

    std::cout << y << '\n'; // 2
    std::cout << z << '\n'; // 1 (const double&)
}
