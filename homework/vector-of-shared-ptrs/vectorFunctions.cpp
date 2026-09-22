#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec;

    for (size_t i = 0; i < count; i++) {
        vec.push_back(std::make_shared<int>(i));
    }

    return vec;
}

void print(const std::vector<std::shared_ptr<int>>& vec) {
    for (auto& item : vec) {
        std::cout << *item << "\n";
    }
}

void add10(const std::vector<std::shared_ptr<int>>& vec) {
    for (auto& item : vec) {
        if (item) {
            *item += 10;
        }
    }
}

void sub10(int* num) {
    if (num) {
        *num -= 10;
    }
}

void sub10(const std::vector<std::shared_ptr<int>>& vec) {
    for (auto& item : vec) {
        if (item) {
            *item -= 10;
        }
    }
}
