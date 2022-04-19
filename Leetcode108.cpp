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
    
    
    TreeNode *s(vector<int>nums,int l,int h)
    {
        if(l>h)
        {
            return NULL;
        }
        int m = ((h-l)/2)+l;
        TreeNode *t = new TreeNode(nums[m]);
        t->left = s(nums,l,m-1);
        t->right = s(nums,m+1,h);
       
        return t;
    }
        
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int l=0;
        int h = nums.size()-1;
        return(s(nums,l,h));
        
        
       
        
    }
};