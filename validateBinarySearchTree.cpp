class Solution {
public:
    vector<int>v;
    void i(TreeNode *root)
    {
        if(root==NULL)
        {
            return;
        }
        i(root->left);
        v.push_back(root->val);
        i(root->right);
        
    }
    bool isValidBST(TreeNode* root) {
        
        
        if(root==NULL)
        {
            return root;
        }
        i(root);
        for(int i=1;i<v.size();i++)
        {
            if(v[i]<=v[i-1])
            {
                return 0;
            }
        }
        return 1;
        
        
    }
};