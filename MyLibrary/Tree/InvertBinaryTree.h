#include "Tree.h"

/*Solution For https://leetcode.com/problems/invert-binary-tree/submissions/1342254994/ and https://neetcode.io/problems/invert-a-binary-tree */

using namespace std;

class InvertBinaryTree
{
private:
    TreeNode* NodeStorage = nullptr;
public:
    TreeNode* invertTree(TreeNode* root) {

        if (root == nullptr) return 0;
        
        NodeStorage = root->left;
        root->left = root->right;
        root->right = NodeStorage;
        invertTree(root->left);
        invertTree(root->right);
        return root;

    }
};

