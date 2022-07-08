#include "Solution.h"
#include <string>
#include <algorithm>

int Solution::numSteps(std::string s) {
    int ans = 0;
    int last = 0;
    std::for_each(s.rbegin(), s.rend() - 1, [&ans, &last](char& ch) {
        ans += 1 + ((ch == '1' && last == 0) || (ch == '0' && last == 1));
        last = ch == '1' || last == 1;
    });
    return ans + (last == 1);
}

