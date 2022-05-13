/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
        {
            return root;
        }
           queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            Node *prev = NULL;
            int n=q.size();
            while(n--)
            {
                Node *temp = q.front();
                temp->next = prev;
                prev = temp;
                q.pop();
                if(temp->right !=NULL)
                {
                    q.push(temp->right);
                }
                if(temp->left != NULL)
                {
                    q.push(temp->left);
                }
            }
        }
        return root;
    }
};