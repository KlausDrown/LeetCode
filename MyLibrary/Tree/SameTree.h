#include "Tree.h"
#include <stack>
/*Solution for https://neetcode.io/problems/same-binary-tree and https://leetcode.com/problems/same-tree/ */
using namespace std;
class SameTree
{
private:
    stack<int> tree1;
    stack<int> tree2;
public:

    int filltree1(TreeNode* tree)
    {
        if (tree == NULL)
        {
            tree1.push(100000);
            return 0;
        }
        tree1.push(tree->val);
        filltree1(tree->left);
        filltree1(tree->right);
        return 0;
    }

    int filltree2(TreeNode* tree)
    {
        if (tree == NULL)
        {

            tree2.push(100000);
            return 0;
        }
        tree2.push(tree->val);
        filltree2(tree->left);
        filltree2(tree->right);
        return 0;
    }


    bool isSameTree(TreeNode* p, TreeNode* q) {

        filltree1(p);
        filltree2(q);
        if (tree1 == tree2)return true; else  return false;
    }
};
