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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        int l=0;
        ListNode *dummy = new ListNode(0);
        dummy->next=head;
        int len=0;
        ListNode *leftpr=NULL,*curr,*nex,*prev;
        ListNode *lef=dummy;
        while(len !=left)
        {
            leftpr=lef;
            lef=lef->next;
            len++;
        }
        curr=lef;
        prev=leftpr;
        while(len<=right)
        {
            if(curr==NULL)
            {
                break;
            }
                
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
            len++;
        }
        lef->next=curr;
        leftpr->next=prev;
        return(dummy->next);
        
        
        
    }
};