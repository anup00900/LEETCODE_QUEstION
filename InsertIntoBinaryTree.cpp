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
    
    TreeNode* i(TreeNode *root,TreeNode *t)
    {
        if(root==NULL)
        {
            return t;
        }
        if(root->val > t->val)
        {
            root->left=i(root->left,t);
        }
        else if(root->val < t->val)
        {
            root->right=i(root->right,t);
        }
        return(root);
        
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        TreeNode *t = new TreeNode();
        t->val = val;
        t->left = NULL;
        t->right = NULL;
        
        return(i(root,t));
        
        
    }
};