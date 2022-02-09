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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode*> s;
        TreeNode* t=root;
        while(!s.empty() || t)
        {
            if(t)
            {
                s.push(t);
                t=t->left;
            }
            else
            {
                t=s.top();
                s.pop();
                v.push_back(t->val);
                t=t->right;
            }
        }
        return v;
    }
};