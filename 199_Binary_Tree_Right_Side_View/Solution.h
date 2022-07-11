#include "Node.h"
#include <vector>

class Solution {
public:
    std::vector<int> rightSideView(TreeNode* root);
    void dfs(std::vector<int>& result, TreeNode* root, int height = 0);
};
