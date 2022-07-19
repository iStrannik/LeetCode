#include <gtest/gtest.h>
#include "../Solution.h"
#include <vector>

TEST(BaseTest, BasicAssertions) {
    Solution a = Solution();
    std::vector<int> b = {5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 3};
    EXPECT_TRUE(a.makesquare(b));
}

