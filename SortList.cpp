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
    
    //Merge Of Linked List
    ListNode * Merge(ListNode *t1,ListNode *t2)
    {
        if(t1==NULL)
        {
            return t2;
        }
        if(t2==NULL)
        {
            return t1;
        }
        if(t1->val<t2->val)
        {
            t1->next = Merge(t1->next,t2);
            return t1;
        }
        else
        {
            t2->next = Merge(t1,t2->next);
            return t2;
            
        }
    }
    
    
    
    ListNode* sortList(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *fast=head->next->next;
        ListNode *slow=head;
        while(fast!=NULL && fast->next != NULL)
        {
           
            slow=slow->next;
             fast=fast->next->next;
            
            
        }
        ListNode *temp=slow->next;
        slow->next=NULL;
        ListNode *fi = sortList(head); //Splitting node via mid
        ListNode *se=sortList(temp);
        return(Merge(fi,se));
        
        
        
        
    }
};