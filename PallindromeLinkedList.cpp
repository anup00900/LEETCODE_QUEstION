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
    ListNode* rev(ListNode *head)
    {
        ListNode *c=head;
        ListNode *prev=NULL;
        ListNode *next;
        while(c != NULL)
        {
            next=c->next;
            c->next=prev;
            prev=c;
            c=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL)
        {
            return 0;
        }
        else if(head->next==NULL)
        {
            return 1;
        }
        ListNode *fast=head;
        ListNode *slow=head;
        ListNode *pr=NULL;
        
        while(fast !=NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            pr=slow;
            slow=slow->next;
        }
        if(fast != NULL)
        {
            slow->next=rev(slow->next);
            ListNode *p=head;
        ListNode *q=slow->next;
        while(q!=NULL)
        {
            if(p->val != q->val)
            {
                return 0;
            }
            q=q->next;
            p=p->next;
        }
        }
        else
        {
            pr->next=rev(slow);
            ListNode *p=head;
        ListNode *q=pr->next;
        while(q!=NULL)
        {
            if(p->val != q->val)
            {
                return 0;
            }
            q=q->next;
            p=p->next;
        }
        }
        
        
       
        return 1;
        
        
        
        
        
        
        
        
        
    }
};