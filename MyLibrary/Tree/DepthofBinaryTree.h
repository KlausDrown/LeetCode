#include "Tree.h"
#include <cstddef>
#include <utility>

using namespace std;

class DepthofBinaryTree
{
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
