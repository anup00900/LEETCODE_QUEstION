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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        
        vector<vector<int>>v;
        if(root == NULL)
        {
            return v;
        }
        
        queue<TreeNode *>q;
        
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int>t;
            
            while(n--)
            {
                TreeNode *g = q.front();
                q.pop();
                t.push_back(g->val);
                
                if(g->left !=NULL)
                {
                    q.push(g->left);
                }
                if(g->right!=NULL)
                {
                    q.push(g->right);
                } 
                
            }
            v.push_back(t);
        }
         vector<vector<int>>ans;
        for(int i=v.size()-1;i>=0;i--)
        {
            ans.push_back(v[i]);
        }
        return ans;
        
    }
};