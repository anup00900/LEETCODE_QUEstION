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
    
    int N(TreeNode *root,int s)
    {
        if(root==NULL)
        {
            return 0;
        }
        int t=s*10+root->val;
        if(root->left==NULL and root->right==NULL)
        {
            
            return t;
        }
       
        return((N(root->left,t)+N(root->right,t)));
    }
    
    
    
    
    int sumNumbers(TreeNode* root) {
        
        
        
        
        return((N(root,0)));
        
        
        
    }
};