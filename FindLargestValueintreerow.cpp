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
    vector<int> largestValues(TreeNode* root) {
        vector<int>v;
        queue<TreeNode *>q;
        if(root==NULL)
        {
            return v;
        }
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            int m=INT_MIN;
            while(n--)
            {

                TreeNode *t = q.front();
                q.pop();
                
                    
                m=max(m,t->val);
                if(t->left !=NULL)
                {
                    q.push(t->left);
                }
                if(t->right != NULL)
                {
                    q.push(t->right);
                }
            }
            v.push_back(m);
        }
        return v;



    
    }
};