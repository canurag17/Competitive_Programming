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
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
       if(p && q && p->val==q->val)
       {
           bool l=isSameTree(p->left,q->left);
           bool r=isSameTree(p->right,q->right);
           return l && r;
       }
       if((!p && q) || (p && !q))
           return false;
       if(p && q && p->val!=q->val)
           return false;
        return true;
    }
};