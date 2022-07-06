#include "Solution.h"

TreeNode* Solution::convertBST(TreeNode* root) {
    rightDFS(root);
    return root;
}

int Solution::rightDFS(TreeNode* root, int cur) {
    if (!root) {
        return cur;
    }
    cur = rightDFS(root->right, cur);
    cur += root->val;
    root->val = cur;
    cur  = rightDFS(root->left, cur);
    return cur;
}
