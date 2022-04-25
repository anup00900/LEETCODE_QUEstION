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
  
int xp,yp;   
    
int h(TreeNode* root,int x) {
        
        int l=0;
        
        queue<TreeNode *>q;
        if(root==NULL)
        {
            return 0;
        }
        q.push(root);
        while(!q.empty())
        {
           
            int n = q.size();
            l++;
            while(n--)
            {
                 TreeNode * t=q.front();
                if(t->val == x)
                {
                    return l;
                }
                q.pop();
                if(t->left != NULL)
                {
                    q.push(t->left);
                }
                if(t->right != NULL)
                {
                    q.push(t->right);
                }
               
                
            }
           
        }
        return l;
        
        
    }
    
    void d(TreeNode *root,int x,int y,int par)
    {
        if(root == NULL)
        {
            return;
        }
        if(root ->val == x)
        {
            xp = par;
            
        }
        if(root->val == y)
        {
            yp = par;
        }
        d(root->left,x,y,root->val);
         d(root->right,x,y,root->val);
        
        
        
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        int hx = h(root,x);
        int hy = h(root,y);
        
        if(hx != hy)
        {
            return 0;
        }
        if(root->val == x or root->val == y)
        {
            return 0;
        }
        d(root,x,y,root->val);
        if(xp == yp)
        {
            return 0;
        }
        return 1;
        
        
    }
};