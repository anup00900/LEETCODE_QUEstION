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
    int m = 0;
    int hei(TreeNode *root)
    {
        if(root == NULL)
        {
            return 0;
        }
        return(1+max(hei(root->left),hei(root->right)));
    }
    
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        
        if(root == NULL)
        {
            return 0;
        }
        int l = hei(root->left);
        int r = hei(root->right);
        m=max(m,(l+r));
        int x = diameterOfBinaryTree(root->left);
        int y = diameterOfBinaryTree(root->right); 
        return(m);
        
        
        
        
        
        
    }
};