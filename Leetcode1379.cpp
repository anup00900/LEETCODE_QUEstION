/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode *temp=NULL;
    void p(TreeNode* o, TreeNode* c, TreeNode* t)
    {
        if(c==NULL)
        {
            return;
        }
        if(c->val == t->val)
        {
            temp=c;
            return;
        }
        p(o->left,c->left,t);
        p(o->right,c->right,t);
    }
    TreeNode* getTargetCopy(TreeNode* o, TreeNode* c, TreeNode* t) {
        
       p(o,c,t);
        return temp;
    }
};