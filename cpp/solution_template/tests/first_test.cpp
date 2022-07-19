#include <gtest/gtest.h>
#include "../Solution.h"

TEST(BaseTest, BasicAssertions) {
    Solution a = Solution();
    EXPECT_EQ(a.testFunction(5), 5);
}

TEST(BaseTest, NotBasicAssertions) {
    Solution a = Solution();
    EXPECT_NE(a.testFunction(5), 3);
}
