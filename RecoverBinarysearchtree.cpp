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
    
private:
    TreeNode *first;
    TreeNode *prev;
    TreeNode *last;
    
public:
    
    
    void in(TreeNode *root)
    {
        
        if(root==NULL)
        {
            return;
        }
        in(root->left);
        
        
        if(prev!=NULL and (root->val < prev->val))
        {
            if(first == NULL)
            {
                first =prev;
                last = root;
            }
            else
            {
                last=root;
            }
        }
        prev=root;
        
        in(root->right);
        
        
    }
    
   
    void recoverTree(TreeNode* root) {
        
        first=prev=last=NULL;
        in(root);
        swap(first->val,last->val);
        
        
        
        
    }
};