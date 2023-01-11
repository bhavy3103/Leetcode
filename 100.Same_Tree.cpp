/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        // if((p->left ==q->left) && (p->right==q->right))
        // return true;
        // else
        // return false;
        if (p == nullptr && q == nullptr)
            return true;
        else if (q == nullptr || p == nullptr)
            return false;
        else if (p->val != q->val)
            return false;
        else
            return isSameTree(p->right, q->right) && isSameTree(p->left, q->left);
    }
};