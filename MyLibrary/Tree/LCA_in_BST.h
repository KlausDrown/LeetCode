#include "Tree.h"
using namespace std;

/*Solution For https://neetcode.io/problems/lowest-common-ancestor-in-binary-search-tree and https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/ */
/*is medium task?*/

class LCA_in_BST
{
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		int target1 = p->val;
		int target2 = q->val;
		while (true)
		{
			if (target1 < root->val && target2 < root->val)
			{
				root = root->left;
			}
			else if (target1 > root->val && target2 > root->val)
			{
				root = root->right;
			}
			else return root;
		}
    }
};

