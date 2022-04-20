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
class BSTIterator {
public:
    vector<int>v;
    int i=0;
    
    void in(TreeNode *root)
    {
        if(root==NULL)
        {
            return;
        }
        in(root->left);
        v.push_back(root->val);
        in(root->right);
    }
    
    BSTIterator(TreeNode* root) {
        
        in(root);
        
        
        
    }
    
    int next() {
        
        return(v[i++]);
        
    }
    
    bool hasNext() {

        if(i>=v.size())
        {
            return 0;
        }
        return 1;
        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */