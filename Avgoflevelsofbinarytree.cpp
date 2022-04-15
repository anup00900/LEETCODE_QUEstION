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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>v;
        if(root == NULL)
        {
            return v;
        }
        
        queue<TreeNode *>q;
        
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            int k=n;
            double avg=0;
            
            while(n--)
            {
                TreeNode *g = q.front();
                q.pop();
                avg=avg+g->val;
                if(g->left !=NULL)
                {
                    q.push(g->left);
                }
                if(g->right!=NULL)
                {
                    q.push(g->right);
                } 
                
            }
            avg=avg/k;
            
            v.push_back(avg);
        }
        
        
        return v;
        
    }
    
};