#include <iostream>
#include <vector>

int main() {
    std::vector<int> v(10, 100);
    v.reserve(100);
    std::vector<int> v2(v);
    v2.push_back(1);
    v2.push_back(1);
    v2.push_back(1);

    v2 = v;
    int n = v.size();

    std::cout << v.size() << ' ' << v.capacity() << '\n';
    std::cout << v2.size() << ' ' << v2.capacity() << '\n';
    // v.resize(15, 10);
    // std::cout << v.size() << ' ' << v.capacity() << '\n';
    // v.clear();
    // std::cout << v.size() << ' ' << v.capacity() << '\n';

    // if (v.empty()) {
    //     // ...
    // }

    // for (size_t i = 0; i < v.size(); ++i) {
    //     std::cout << v[i] << ' ';
    // }
    // for (auto elem : v) {
    //     std::cout << elem << ' ';
    // }
    // std::cout << '\n';

    // v.push_back(1);
    // std::cout << v.size() << ' ' << v.capacity() << '\n';
    // std::cout << v[0] << '\n';
    // for (size_t i = 0; i < 100; ++i) {
    //     v.push_back(i);
    //     std::cout << v.size() << ' ' << v.capacity() << '\n';
    // }
    // std::cout << '\n';
}
