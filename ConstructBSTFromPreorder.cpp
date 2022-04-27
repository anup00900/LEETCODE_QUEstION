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
    
    unordered_map<int,int>umap;
    TreeNode* i(vector<int>& preorder,vector<int>&inorder,int s,int e)
    {
        if(s>e)
        {
            return NULL;
        }
        int m=INT_MAX;
        int k;
        for(int i=s;i<=e;i++)
        {
           if(umap[inorder[i]]<m)
           {
               m = umap[inorder[i]];
               k=i;
           }
        }
        TreeNode *root = new TreeNode(inorder[k]);
        root->left = i(preorder,inorder,s,k-1);
        root->right = i(preorder,inorder,k+1,e);
        return root;
        
        
    }
    
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        vector<int>inorder = preorder;
        sort(inorder.begin(),inorder.end());
        int n=inorder.size();
        for(int i=0;i<preorder.size();i++)
        {
            umap[preorder[i]]=i;
        }
        return(i(preorder,inorder,0,n-1));
        
    }
};