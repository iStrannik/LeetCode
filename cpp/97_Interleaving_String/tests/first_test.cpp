#include <gtest/gtest.h>
#include "../Solution.h"

TEST(BaseTest, BasicAssertions) {
    Solution a = Solution();
    EXPECT_TRUE(a.isInterleave("aabcc", "dbbca", "aadbbcbcac"));
}

TEST(BaseTest, FalseAssertion) {
    Solution a = Solution();
    EXPECT_FALSE(a.isInterleave("aabcc", "dbbca", "aadbbbaccc"));
}
