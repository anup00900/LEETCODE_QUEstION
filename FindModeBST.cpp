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
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        unordered_map<int,int>umap;
        if(root==NULL)
        {
            return ans;
        }
        i(root);
        for(int i=0;i<v.size();i++)
        {
            umap[v[i]]++;
        }
        int m=INT_MIN;
        int k;
        for(auto it=umap.begin();it!=umap.end();it++)
        {
            if(it->second>m)
            {
                m=it->second;
            }
            
        }
        for(auto it=umap.begin();it!=umap.end();it++)
        {
            if(it->second==m)
            {
                ans.push_back(it->first);
            }
            
        }
        return ans;
        
        
        
        
        
    }
};