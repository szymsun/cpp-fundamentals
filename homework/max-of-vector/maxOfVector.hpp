#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    
    int max = *vec.begin();

    for (auto num : vec){
        if (num > max){
            max = num;
        }
    }

    return max;
}
