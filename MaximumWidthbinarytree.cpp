int widthOfBinaryTree(TreeNode* root) {
        
        unordered_map<TreeNode*,unsigned long long int>umap;
        if(root==NULL)
        {
            return 0;
        }
        int m=0;
        queue<TreeNode *>q;
        umap[root]=0;
        q.push(root);
        
        while(!q.empty())
        {
            int n=q.size();
            TreeNode*temp=q.front();
           
            while(n--)
            {
                TreeNode *righ=q.front();
                q.pop();
                
                if(m < (umap[righ]-umap[temp]+1))
                {
                    m=umap[righ]-umap[temp]+1;
                }
                
                if(righ->left!=NULL)
                {
                    q.push(righ->left);
                    umap[righ->left]=2*umap[righ];
                }
                if(righ->right!=NULL)
                {
                    q.push(righ->right);
                     umap[righ->right]=2*umap[righ]+1;
                }
                
                
                
            }
        }
        return m;
        
        
        
        
    }
};