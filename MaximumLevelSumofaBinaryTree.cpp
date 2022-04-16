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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode *>q;
        int ind;
        int m=INT_MIN;
        if(root==NULL)
        {
            return 0;
        }
        q.push(root);
        int lev=0;
        while(!q.empty())
        {
            int v1=0;
            int n = q.size();
            lev++;
            while(n--)
            {
                 TreeNode * t=q.front();
                v1+=(t->val);
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
            if(m<v1)
            {
                m=v1;
                ind=lev;
            }
        }
        return ind;
    }
};