/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int l1=0;
        int l2=0;
        ListNode *temp1=headA;
        ListNode *temp2=headB;
        
        while(temp1!=NULL)
        {
            l1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            l2++;
            temp2=temp2->next;
        }
           int k;
        
        if(l2>l1)
        {
            ListNode *t=headA;
            headA=headB;
            headB=t;
            k=l2-l1;
            
        }
        else
        {
            k=l1-l2;
        }
        
        ListNode *t1=headA;
        ListNode *t2=headB;
        
        while(k--)
        {
            t1=t1->next;
        }
        while(t1!=NULL && t2!=NULL)
        {
            if(t1==t2)
            {
                return t1;
            }
            t1=t1->next;
            t2=t2->next;
        }
        return NULL;
        
     
        
    }
};