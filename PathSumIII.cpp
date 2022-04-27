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
    int v=0;
    void i(TreeNode *root,int t,long long int c)
    {
        if(root==NULL)
        {
            return;
        }
        c=c+root->val;
        if(c == t)
        {
            
           v++;
          
        }
        i(root->left,t,c);
        i(root->right,t,c);    
    }
    int pathSum(TreeNode* root, int targetSum) {
        
        if(root==NULL)
        {
            
            return 0;
            
        }
        i(root,targetSum,0);
        int x = pathSum(root->left,targetSum);
        int y = pathSum(root->right,targetSum);
        return v;
    }
};