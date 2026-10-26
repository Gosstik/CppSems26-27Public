#include <iostream>

void Make9(const int& val) {
    int& r = const_cast<int&>(val);
    r = 9;
}

int main() {
    {
        // OK
        int x = 0;
        Make9(x);
        std::cout << x << '\n';  // 9
    }

    {
        // UB
        const int kX = 0;
        Make9(kX);
        std::cout << kX << '\n';  // ??? 0
    }

    {
        int x = 0;
        // const int cx = const_cast<const int>(x); // CE
        const int cx1 = const_cast<const int&>(x);  // OK, explicit
        const int cx2 = x;                          // OK, implicit
    }
}
