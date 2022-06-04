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
    int findBottomLeftValue(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        queue<TreeNode *>q;
        q.push(root);
        int val=root->val;
        while(!q.empty())
        {
            int qs=q.size();
            int f=0;
            while(qs--)
            {
                TreeNode *node = q.front();
                if(f==0)
                {
                    f=1;
                    val=node->val;
                }
                q.pop();
                if(node->left!=NULL)
                {
                    q.push(node->left);
                }
                if(node->right!=NULL)
                {
                    q.push(node->right);
                }
            }
        }
        return val;
        
        
    }
};