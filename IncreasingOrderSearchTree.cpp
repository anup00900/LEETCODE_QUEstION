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
    void inor(TreeNode *root)
    {
        if(root==NULL)
        {
            return;
        }
        inor(root->left);
        v.push_back(root->val);
        inor(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        
        inor(root);
        if(root==NULL)
        {
            return root;
        }
        TreeNode *temp=new TreeNode(-2);
        temp->left=NULL;
        temp->right=NULL;
        TreeNode *dummy=temp;
        for(int i=0;i<v.size();i++)
        {
            TreeNode *t = new TreeNode(v[i]);
            t->left=NULL;
            t->right=NULL;
            temp->right=t;
            temp=t;
        }
        
        
        return dummy->right;
        
        
    }
};