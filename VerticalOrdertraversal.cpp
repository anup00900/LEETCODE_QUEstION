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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        queue<pair<TreeNode *,pair<int,int>>>q;
        q.push({root,{0,0}});
        
        map<int,map<int,multiset<int>>>umap;
        
        while(!q.empty())
        {
            TreeNode *temp = q.front().first;
            int vl = q.front().second.first;
            int hl = q.front().second.second;
            q.pop();
            umap[vl][hl].insert(temp->val);
            if(temp->left!=NULL)
            {
                q.push({temp->left,{vl-1,hl+1}});
            }
            if(temp->right!=NULL)
            {
                q.push({temp->right,{vl+1,hl+1}});
            }
            
     
            
        }
        
        
        for(auto it:umap)
        {
            vector<int>v;
            for(auto i:it.second)
            {
                for(auto j=i.second.begin();j!=i.second.end();j++)
                {
                  
                    v.push_back(*j);
                }
                
            }
            ans.push_back(v);
        }
        
        return ans;
        
    }
};