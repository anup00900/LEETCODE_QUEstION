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
    int goodNodes(TreeNode* root) {
        
        
        queue<pair<TreeNode*,int>>q;
        q.push({root,root->val});
      
        int c=1;
        while(!q.empty())
        {
          
            int qs = q.size(); 
            while(qs--)
            {
                TreeNode *ro = q.front().first;
               
                int m = q.front().second;
                 q.pop();
                if(ro->left!=NULL)
                {
                    if(ro->left->val >=m)
                    {
                      
                        c++;
                        q.push({ro->left,ro->left->val});
                    }
                    else
                    {
                         q.push({ro->left,m});
                    }
                    
                    
                }
                if(ro->right!=NULL)
                {
                    if(ro->right->val >=m)
                    {
                       
                        c++;
                        q.push({ro->right,ro->right->val});
                    }
                    else
                    {
                         q.push({ro->right,m});
                    }
                }
                
            }
        }
        return c;
        
        
        
        
        
    }
};