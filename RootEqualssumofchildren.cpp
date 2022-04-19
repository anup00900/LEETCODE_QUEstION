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
    int s1=0,s2=0;
    void left(TreeNode *root)
    {
        if(root==NULL)
        {
            return;
        }
        
        s1+=root->val;
        left(root->left);
        left(root->right);
        
        
        
    }
    void left1(TreeNode *root)
    {
        if(root==NULL)
        {
            return;
        }
        
        s2+=root->val;
        left1(root->left);
        left1(root->right);
        
        
        
    }
    
    bool checkTree(TreeNode* root) {
        
        if(root==NULL)
        {
            return 0;
        }
        left(root->left);
        left1(root->right);
        if(s1+s2!=root->val)
        {
            return 0;
        }
        return 1;
        
    }
};