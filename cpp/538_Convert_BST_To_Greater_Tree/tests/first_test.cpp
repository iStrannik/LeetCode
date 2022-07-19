#include <gtest/gtest.h>
#include "../Solution.h"
#include "../TreeNode.h"

TEST(BaseTest, BasicAssertions) {
    TreeNode* root = new TreeNode(0);
    TreeNode* right = new TreeNode(1);
    root->right = right;
    Solution a = Solution();
    root = a.convertBST(root);
    EXPECT_EQ(root->val, 1);
    EXPECT_EQ(root->right->val, 1);
}
