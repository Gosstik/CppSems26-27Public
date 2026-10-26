#include <iostream>

// clang-format off

enum class Color {
    Red,         // = 0
    Green,       // = 1
    Yellow = 5,  // = 5
    Blue,        // = 6
};

int main() {
    {
        double x = 0;
        int i1 = x;  // Narrowing conversion from 'double' to 'int'
        int i2 = static_cast<int>(x);  // OK
        std::cout << i1 << ' ' << i2 << '\n';
    }

    {
        Color c = Color::Green;
        int cv1 = c; // Cannot initialize a variable of type 'int' with an
        // lvalue of type 'Color'
        int cv2 = static_cast<int>(c);  // OK
        std::cout << cv2 << '\n';       // 1
    }

    {
        // https://eel.is/c++draft/dcl.enum#8
        // ... It is possible to define an enumeration that has values not defined by any of its enumerators. ...
        Color invalid = static_cast<Color>(3);
        std::cout << static_cast<int>(invalid) << '\n';  // 3
    }
}

// clang-format on
