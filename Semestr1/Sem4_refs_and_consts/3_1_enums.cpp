#include <iostream>

enum class Operations : size_t {
    Insert = 0,
    Merge = 1,
    Erase = 2,
    //   Assign = 3,
    //   GetMin = 4,
    //   ExtractMin = 5,
};

int main() {
    size_t n{};
    size_t q{};
    std::cin >> n >> q;

    size_t op{};
    for (size_t i = 0; i < q; ++i) {
        std::cin >> op;
        switch (Operations(op)) {
            case Operations::Insert: {
                size_t val{};
                std::cin >> val;
                std::cout << "Inserted " << val << '\n';
                break;
            }
            case Operations::Merge: {
                std::cout << "Merged\n";
                break;
            }
            case Operations::Erase: {
                size_t elem_i{};
                std::cin >> elem_i;
                std::cout << "Erased " << elem_i << '\n';
                break;
            }
        }
    }
}
