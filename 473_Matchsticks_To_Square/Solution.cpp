#include "Solution.h"
#include <vector>
#include <algorithm>
#include <iostream>


bool Solution::getStick(std::vector<int>& matchSticks, size_t index, unsigned targetSum, std::vector<unsigned>& currentSum) {
    if (index >= matchSticks.size()) {
        return true;
    }
    for (int i = 0; i < 4; ++i) {
        if (matchSticks[index] + currentSum[i] <= targetSum) {
            currentSum[i] += matchSticks[index];
            if (getStick(matchSticks, index + 1, targetSum, currentSum)) {
                return true;
            }
            currentSum[i] -= matchSticks[index];
        }
    }
    return false;
}

bool Solution::makesquare(std::vector<int>& matchsticks) {
    unsigned int sum = 0;
    for (const auto& i : matchsticks) {
        sum += i;
    }
    if (sum % 4) {
        return false;
    }
    sum = sum / 4;
    std::sort(matchsticks.begin(), matchsticks.end());
    std::reverse(matchsticks.begin(), matchsticks.end());
    std::vector<unsigned> currentSum = {0, 0, 0, 0};
    return getStick(matchsticks, 0, sum, currentSum);
}

