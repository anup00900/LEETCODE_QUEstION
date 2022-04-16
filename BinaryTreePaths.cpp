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
    vector<string>v;
    void b(TreeNode *root,string st)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left == NULL and root->right==NULL)
        {
            st=st+to_string(root->val);
            v.push_back(st);
            return;
        }
        st=st+to_string(root->val);
        st=st+"->";
        b(root->left,st);
        b(root->right,st);
        
        
        
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        
        string st="";
        b(root,st);
        return v;
        
    }
};