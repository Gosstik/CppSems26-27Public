#include <iostream>
#include <string>
#include <vector>

// !!! std::string is not a container
// std::basic_string

const int cSize = 10;

class MyClass {};

std::string Foo(std::string& s, size_t l, size_t len = std::string::npos) {
    std::string res;

    int var_1;

    if (len == std::string::npos) {
        return s.substr(l, std::string::npos);
    }
    return s.substr(l, len);
}

int main() {
    // std::vector<char> v;
    // std::cin >> v;

    const char* cs = "abcdef";
    std::string s(cs);

    // Foo(s, 3);
    // Foo(s, 3, 2);
    // std::cout << Foo(s, 3) << '\n';
    // std::cout << Foo(s, 3, 2) << '\n';
    std::cout << s.substr(3, 10) << '\n';

    // // std::cout << cs;
    // for (size_t i = 0;; ++i) {
    //     if (cs[i] == '\0') {
    //         break;
    //     }
    //     std::cout << cs[i];
    // }

    // size_t len = 0;
    // for (size_t i = 0; i < v.size(); ++i) {
    //     std::string tmp(v[i]);
    //     len += tmp.size();
    // }
    // for (const std::string& e: v) {
    //     len += e.size();
    // }

    // std::string s;
    // const char* r = s.data();
    // s.reserve(len);
    // for (std::string e: v) {
    //     s += e;
    // }
    // // s = s + s + s + s;
    // std::cout << s << '\n';

    // std::cout << s.size() << ' ' << s.capacity() << '\n';

    // std::cin >> s;
    // std::cout << s << '\n';

    // s.starts_with("");
}
