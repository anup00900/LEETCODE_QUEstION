/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *rever(ListNode *t)
    {
        if(t == NULL)
        {
            return NULL;
        }
        
        ListNode *c=t;
        ListNode *n;
        ListNode *p=NULL;
        while(c!=NULL)
        {
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
       
        return p;
        
        
        
        
        
    }
    int pairSum(ListNode* head) {
        
        ListNode *temp = head;
        
        int m=0;
        if(head==NULL)
        {
            return 0;
        }
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast != NULL && fast->next != NULL)
        {
           slow=slow->next;
            fast = fast->next->next;
            
        }
        ListNode *root = rever(slow);
        while(root!=NULL)
        {
            m=max(m,(root->val+head->val));
            root=root->next;
            head=head->next;
        }
        return m;
    }
};