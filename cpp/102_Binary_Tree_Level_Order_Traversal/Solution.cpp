#include "Node.h"
#include "Solution.h"
#include <vector>

std::vector<std::vector<int>> Solution::levelOrder(TreeNode* root) {
    std::vector<std::vector<int>> result;
    dfs(result, root);
    return result;
}

void Solution::dfs(std::vector<std::vector<int>>& result, TreeNode* root, size_t height) {
    if (!root) {
        return;
    }
    if (height >= result.size()) {
        result.emplace_back();
    }
    result[height].push_back(root->val);
    dfs(result, root->left, height + 1);
    dfs(result, root->right, height + 1);
}

