#include "Node.h"
#include "Solution.h"
#include <vector>

std::vector<int> Solution::rightSideView(TreeNode* root) {
    std::vector<int> result;
    dfs(result, root);
    return result;
}

void Solution::dfs(std::vector<int>& result, TreeNode* root, int height) {
    if (!root) {
        return;
    }
    if (height >= result.size()) {
        result.push_back(root->val);
    }
    dfs(result, root->right, height + 1);
    dfs(result, root->left, height + 1);
}

