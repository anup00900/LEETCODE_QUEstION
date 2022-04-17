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
    bool inor(TreeNode *root,int t)
    {
        if(root==NULL)
        {
            return 1;
        }
        if(root->val != t)
        {
            return 0;
        }
        return(inor(root->left,t) and inor(root->right,t));
        
        
        
    }
    bool isUnivalTree(TreeNode* root) {
        
        if(root==NULL)
        {
            return 0;
        }
        return(inor(root,root->val));
    }
};