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
     vector<vector<int>>v;
    void i(TreeNode *root,int t,vector<int>v1,int c)
    {
        if(root==NULL)
        {
            return;
        }
        c=c+root->val;
        v1.push_back(root->val);
        if(c == t and root!=NULL and root->left == NULL and root->right ==NULL)
        {
           v.push_back(v1);
            return;
        }
        i(root->left,t,v1,c);
        i(root->right,t,v1,c);
        
        
        
        
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        if(root==NULL)
        {
            return v;
        }
        vector<int>v1;
        i(root,targetSum,v1,0);
        
        return v;
    }
};