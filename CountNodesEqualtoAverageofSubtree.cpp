class Solution {
public:
    int ans=0;
    int node(TreeNode *root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        return(1+node(root->left)+node(root->right));
        
    }
    int sums(TreeNode *root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        return(root->val+sums(root->left)+sums(root->right));
        
    }
    void pre(TreeNode *root)
    {
        if(root==NULL)
        {
            return;
        }
        int n = node(root);
        int s = sums(root);
        
        int avg=0;
        if(n != 0)
        {
            avg = s/n;
        }
        if(avg == root->val)
        {
           ans++;
            
        }
        
        pre(root->left);
        pre(root->right);
        
    }
    int averageOfSubtree(TreeNode* root) {
        
        pre(root);
        return ans;
        
    }
};