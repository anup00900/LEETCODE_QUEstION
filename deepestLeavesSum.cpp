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
   
    int dept(TreeNode * root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return(1+max(dept(root->left),dept(root->right)));
    }
    
    int d(TreeNode *root,int lev,int c)
    {
        if(root==NULL)
        {
            return 0;
        }
        if(root->left==NULL and root->right==NULL and c==lev)
        {
            return(root->val+d(root->left,lev,c+1)+d(root->right,lev,c+1));
        }
        return(d(root->left,lev,c+1)+d(root->right,lev,c+1));
    }
  
    
    int deepestLeavesSum(TreeNode* root) {
        
        
        int lev=dept(root);
        return(d(root,lev,1));
        
        
    }
};