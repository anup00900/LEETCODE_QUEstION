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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        int l=0;
        queue<TreeNode *>q;
        if(root==NULL)
        {
            return v;
        }
        q.push(root);
        while(!q.empty())
        {
            vector<int>v1;
            int n = q.size();
            
            while(n--)
            {
                 TreeNode * t=q.front();
                v1.push_back(t->val);
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
            
            v.push_back(v1);
        }
        for(int i=0;i<v.size();i++)
        {
            if(i%2==1)
            {
                reverse(v[i].begin(),v[i].end());
            }
          
        }
        return(v);
        
    }
};