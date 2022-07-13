#include "Node.h"
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> levelOrder(TreeNode* root);
    void dfs(std::vector<std::vector<int>>& result, TreeNode* root, size_t height = 0);
};
