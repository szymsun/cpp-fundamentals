#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> out = {};

    if (count <= 0){
        return {};
    }

    for (size_t i = 0; i < count; i++)
    {
        out.push_back(step * (i+1));
    }

    return out;
}
