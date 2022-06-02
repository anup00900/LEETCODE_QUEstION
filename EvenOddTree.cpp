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
    bool isEvenOddTree(TreeNode* root) {
        
        queue<TreeNode*>q;
        q.push(root);
        int l=-1;
        while(!q.empty())
        {
            
            int qs = q.size(); 
            l++;
            int m;
            if(l%2==0)
            {
                m = INT_MIN;
            }
            else
            {
                m = INT_MAX;
            }
            while( l>=0 and l%2==0 and qs--)
            {
                TreeNode *ro = q.front();
                q.pop();
                
               
                       
                       
                       if((ro->val)%2==1 and ro->val>m)
                       {
                           m=ro->val;
                       }
                       else
                       {
                           return 0;
                       }
                if(ro->left!=NULL)
                {
                   
                    q.push(ro->left);
                    
                    
                }
                if(ro->right!=NULL)
                {
                   
                    q.push(ro->right);
                    
                    
                }
                      
                       
            }
            while( l>=0 and l%2==1 and qs--)
            {
                TreeNode *ro = q.front();
                q.pop();
                
                
                       if((ro->val)%2==0 and ro->val<m)
                       {
                           m=ro->val;
                       }
                       else
                       {
                           return 0;
                       }
                      
                if(ro->left!=NULL)
                {
                   
                    q.push(ro->left);
                    
                    
                }
                if(ro->right!=NULL)
                {
                   
                    q.push(ro->right);
                    
                    
                } 
                
            }    
                
                
                
        }
       
        return 1;
        
    }
};