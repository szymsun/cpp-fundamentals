#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int sum = 0;
    
    for (auto num : numbers){
        if (num % 2 == 0){
            sum += num;
        }
    }
    return sum;

}
