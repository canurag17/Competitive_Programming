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
    int height(TreeNode* root)
    {
        if(root)
        {
            int x=height(root->left);
            int y=height(root->right);
            return max(x,y)+1;
        }
        return 0;
    }
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        if((root && abs(height(root->left)-height(root->right))<=1))
            return isBalanced(root->left) && isBalanced(root->right);
        return false;
        
    }
};