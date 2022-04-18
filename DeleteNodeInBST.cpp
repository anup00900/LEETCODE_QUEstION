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
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        
        if(root==NULL)
        {
            return NULL;
        }
        if(root->val >key)
        {
            root->left = deleteNode(root->left, key);
        }
        else if(root->val < key)
        {
            root->right = deleteNode(root->right, key);
        }
        else
        {
            if(root->left == NULL and root->right == NULL)
            {
                return NULL;
            }
            else if(root->left == NULL or root->right == NULL)
            {
                if(root->left != NULL)
                {
                    return root->left;
                }
                else
                {
                    return root->right;
                }
            }
            else
            {
                TreeNode *T = root->left;
                while(T->right)
                {
                    T=T->right;
                }
                root->val = T->val;
                root->left = deleteNode(root->left, T->val);
            }
        }
        
        return root;
        
    }
};