/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(head==NULL)
        {
            return head;
        }
        Node* dummy=new Node(0,NULL,NULL);
        
        Node *ptr=dummy;
        Node *temp=head;
        unordered_map<Node*,Node*>umap;
        while(temp)
        {
            Node *u=new Node(temp->val,NULL,NULL);
            umap[temp]=u;
            ptr->next=u;
            ptr=ptr->next;
            temp=temp->next;
            
            
        }
        temp=head;
        ptr=dummy->next;
        while(temp)
        {
            ptr->random=umap[temp->random];
            ptr=ptr->next;
            temp=temp->next;
        }
        return dummy->next;
    }
};