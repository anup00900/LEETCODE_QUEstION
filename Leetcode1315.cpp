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
    vector<int>v;
    void s(TreeNode *root)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->val %2==0)
        {
            if(root->left != NULL and root->left->left!=NULL)
            {
                v.push_back(root->left->left->val);
            }
            if(root->left != NULL and root->left->right!=NULL)
            {
                v.push_back(root->left->right->val);
            }
            if(root->right != NULL and root->right->left!=NULL)
            {
                v.push_back(root->right->left->val);
            }
            if(root->right != NULL and root->right->right!=NULL)
            {
                v.push_back(root->right->right->val);
            }
            
        }
        s(root->left);
        s(root->right);
        
    }
    int sumEvenGrandparent(TreeNode* root) {
        
        s(root);
        return(accumulate(v.begin(),v.end(),0));
    }
};