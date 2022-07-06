#include "TreeNode.h"

class Solution {
public:
    TreeNode* convertBST(TreeNode* root);
    int rightDFS(TreeNode* root, int cur = 0);
};
