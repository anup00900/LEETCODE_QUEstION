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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL)
        {
            return(NULL);
        }
        ListNode *c = head->next;
        ListNode *p = head;
        
        while(c != NULL)
        {
            if(c->val == p->val)
            {
                c=c->next;
            }
            else
            {
                p->next=c;
                p=c;
                c=c->next;
            }
            
            
        }
        p->next=c;
        return(head);
        
        
        
        
        
    }
};