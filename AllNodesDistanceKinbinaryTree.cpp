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
    unordered_map<TreeNode*,TreeNode*>umap;
    void par(TreeNode *root)
    {
       
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int qs=q.size();
            while(qs--)
            {
                 TreeNode *temp = q.front();
                 q.pop();
                 if(temp->left !=NULL)
                 {
                   
                    umap[temp->left]=temp;
                    q.push(temp->left);
                 }
                 if(temp->right !=NULL)
                 {
                  
                    umap[temp->right]=temp;
                    q.push(temp->right);
                 }
            }
            cout<<endl;
           
        }
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        vector<int>ans;
       
        par(root);//we have parent of every node except root
        int l=0;
        unordered_map<TreeNode*,bool>vis;
        queue<TreeNode*>q;
        q.push(target);
        vis[target]=true;
        
        while(!q.empty())
        {
            int qs=q.size();
            if(l++==k)
            {
                    break;
            }
            while(qs--)
            {
                
                TreeNode *temp = q.front();
                cout<<temp->val<<" ";
                q.pop();
                if(temp->left!=NULL and vis[temp->left]==0)
                {
                     cout<<temp->left->val<<" ";
                    q.push(temp->left);
                    vis[temp->left]=true;
                    
                }
                if(temp->right!=NULL and vis[temp->right]==0)
                {
                     cout<<temp->right->val<<" ";
                    q.push(temp->right);
                    vis[temp->right]=true;
                    
                }
                if(umap[temp] and vis[umap[temp]]==0)
                {
                     cout<<umap[temp]->val<<" ";
                     q.push(umap[temp]);
                     vis[umap[temp]]=true;
                }
                
            }
            cout<<endl;
        }
        
        while(!q.empty())
        {
            cout<<q.front()->val<<" ";
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
        
        
        
        
        
        
        
        
        
    }
};