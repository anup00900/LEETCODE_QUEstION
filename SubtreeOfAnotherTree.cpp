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
    bool dfs(TreeNode* root, TreeNode* subRoot)
    {
        if(root==NULL and subRoot == NULL)
        {
            return 1;
        }
        if(root!=NULL and subRoot == NULL)
        {
            return 0;
        }
        if(root==NULL and subRoot != NULL)
        {
            return 0;
        }
        
        if(root->val != subRoot->val)
        {
            return 0;
            
        }
        return dfs(root->left,subRoot->left) and dfs(root->right,subRoot->right);
        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if(root==NULL and subRoot==NULL)
        {
            return 1;
        }
        if(root==NULL and subRoot!=NULL)
        {
            return 0;
        }
    return dfs(root,subRoot) or isSubtree(root->left,subRoot) or isSubtree(root->right,subRoot);
       
    }
};