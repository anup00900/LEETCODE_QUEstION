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
    
    void s(TreeNode*root,vector<int>v,vector<vector<int>>&ans)
    {
        if(root==NULL)
        {
            return;
        }
        v.push_back(root->val);
        if(root->left==NULL and root->right==NULL)
        {
            ans.push_back(v);
            return;
        }
        s(root->left,v,ans);
        s(root->right,v,ans);
        
    }
    
    
    
    int sumRootToLeaf(TreeNode* root) {
        
       vector<int>v; 
        vector<vector<int>>ans;
        s(root,v,ans);
        int res=0;
        for(int i=0;i<ans.size();i++)
        {
            
                 reverse(ans[i].begin(),ans[i].end());
                
                 
            
        }
        for(int i=0;i<ans.size();i++)
        {
            int su=0;
            for(int j=0;j<ans[i].size();j++)
            {
                
                 su+=ans[i][j]*pow(2,j);
                 
            }
            res+=su;
        }
       return(res);
        
        
        
        
        
        
    }
};