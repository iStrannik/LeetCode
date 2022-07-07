#include "Solution.h"
#include <string>
#include <vector>

bool Solution::isInterleave(std::string s1, std::string s2, std::string s3) {
    if (s3.length() != s1.length() + s2.length()) {
        return false;
    }
    std::vector<std::vector<bool>> dp(s1.length() + 1, std::vector<bool>(s2.length() + 1, false));
    dp[0][0] = true;
    for (size_t i = 0; i <= s1.length(); ++i) {
        for (size_t j = 0; j <= s2.length(); ++j) {
            if (!dp[i][j]) {
                continue;
            }
            if (i < s1.length() && s3[i + j] == s1[i]) {
                dp[i + 1][j] = true;
            }
            if (j < s2.length() && s3[i + j] == s2[j]) {
                dp[i][j + 1] = true;
            }
        }
    }
    return dp[s1.length()][s2.length()];
}

