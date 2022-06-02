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
class FindElements {
public:
    
    TreeNode *temp;
    unordered_map<int,int>umap;
    
    FindElements(TreeNode* root) {
        temp = root;
        temp->val = 0;
        //TreeNode *t = temp;
        queue<TreeNode*>q;
        q.push(temp);
        while(!q.empty())
        {
            
            int qs = q.size(); 
            while(qs--)
            {
                TreeNode *ro = q.front();
                q.pop();
                umap[ro->val]=1;
                if(ro->left!=NULL)
                {
                    ro->left->val=2*(ro->val)+1;
                    q.push(ro->left);
                }
                if(ro->right!=NULL)
                {
                    ro->right->val=2*(ro->val)+2;
                    q.push(ro->right);
                }
                
            }
        }
    }
    
    bool find(int target) {
        
       if(umap.find(target)!=umap.end())
       {
           return 1;
       }
        return 0;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */