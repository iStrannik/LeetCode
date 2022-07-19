#include <gtest/gtest.h>
#include "../Solution.h"

TEST(BaseTest, BasicAssertions) {
    Solution a = Solution();
    EXPECT_EQ(a.numSteps("1101"), 6);
}

TEST(BaseTest, NotBasicAssertions) {
    Solution a = Solution();
    EXPECT_EQ(a.numSteps("10"), 1);
}

TEST(BaseTest, ZeroAns) {
    Solution a = Solution();
    EXPECT_EQ(a.numSteps("1"), 0);
}

