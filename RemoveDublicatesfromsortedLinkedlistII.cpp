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
        
        
        
        if(head==NULL)
        {
            return head;
        }
        ListNode *dummy=new ListNode(-222);
        dummy->next=head;
        ListNode*curr=head->next;
        ListNode*prev=head;
        ListNode*prevpre=dummy;
        while(curr)
        {  
            if(prev->val == curr->val)
            {
                while(curr != NULL and prev->val == curr->val)
                {
                    curr=curr->next;
                }
                prevpre->next=curr;
                prev=curr;
                if(curr != NULL)
                {
                     curr=curr->next;
                }
               
                
                
            }
            else
            {
                prevpre=prev;
                prev=curr;
                curr=curr->next;
            }
           
        }
        return(dummy->next);
     
        
    }
};