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
    
    int find(vector<int>&nums,int s,int e)
    {
        if(s == e)
        {
            return s;
        }
        int m=0;
        int j;
        for(int i=s;i<=e;i++)
        {
          if(m<nums[i])
          {
              j=i;
              m=nums[i];
          }
        }
        return j;  
    }
    
    
    
    TreeNode *st(vector<int>&nums,int s,int e)
    { 
        if(s>e)
        {
            return NULL;
        }
        int j = find(nums,s,e);
        
        TreeNode *root = new TreeNode(nums[j]);
        root->left = st(nums,s,j-1);
        root->right = st(nums,j+1,e);
        return root;
        
        
        
    }
    
    
    
    
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        
        
        return(st(nums,0,nums.size()-1));
        
        
        
        
        
    }
};