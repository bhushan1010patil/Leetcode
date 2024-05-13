

#include <bits/stdc++.h>
using namespace std;

/* Definition for binary tree node. */
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Leetcode101
{
public:
    bool isSymmetric(TreeNode *root)
    {
        if (!root)
            return true;

        return areMirror(root->left, root->right);
    }
    bool areMirror(TreeNode *t1, TreeNode *t2)
    {
        if (!t1 || !t2)
            return (t1 == t2);

        if (t1->val != t2->val)
            return false;

        return (areMirror(t1->left, t2->right) && areMirror(t1->right, t2->left));
    }
};

int main()
{
    return 0;
}