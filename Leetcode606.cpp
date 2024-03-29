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
    string ans="";
    void pre(TreeNode *root)
    {
        if(root==NULL)
        {
            return;
        }
        ans+='(';
        ans+=to_string(root->val);
        if(root->left==NULL and root->right)
        {
            ans+="()";
        }
        
        pre(root->left);
        pre(root->right);
        ans+=')';
  
    }
    string tree2str(TreeNode* root) {
        
        if(root==NULL)
        {
            return "";
        }
        
        pre(root);
        cout<<ans<<" ";
        ans.pop_back();
        ans=ans.substr(1,ans.length());
        return ans;
       
        
        
    }
};