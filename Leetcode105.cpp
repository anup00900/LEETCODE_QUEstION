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
    
    TreeNode *in(vector<int>& p, vector<int>& ino,int s,int e)
    {
        
        if(s>e)
        {
            return NULL;
        }
        
        int j=INT_MAX;
        int k;
        
        for(int i=s;i<=e;i++)
        {
           
                if(umap[ino[i]] <j)
                {
                    j=umap[ino[i]];
                    k=i;
                }
            
        }
        
        TreeNode *root = new TreeNode(p[j]);
        root->left = in(p,ino,s,k-1);
        root->right = in(p,ino,k+1,e);
        return root;   
        
    }
    
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        for(int i=0;i<preorder.size();i++)
        {
            umap[preorder[i]]=i;
        }
        int s=0;
        int e=inorder.size()-1;
        return(in(preorder,inorder,s,e));
         
        
        
    }
};