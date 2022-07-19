#include <gtest/gtest.h>
#include "../Solution.h"
#include "../Node.h"

TEST(BaseTest, BasicAssertions) {
    Solution a = Solution();
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(3);
    const auto result = a.rightSideView(root);
    EXPECT_EQ(result[0], 1);
    EXPECT_EQ(result[1], 3);
    EXPECT_EQ(result.size(), 2);
    delete root->right;
    delete root;
}

