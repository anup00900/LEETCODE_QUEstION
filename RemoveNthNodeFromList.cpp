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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode*prev = NULL;
        ListNode *slow,*fast;
        if(head==NULL)
        {
            return NULL;
        }
        
        slow = head;
        fast=head;
        int i=0;
        while(fast != NULL && i<n)
        {
            fast=fast->next;
            i++;
        }
        while(fast != NULL)
        {
            fast=fast->next;
            prev=slow;
            slow=slow->next;
        }
        if(prev == NULL)
        {
            return (slow->next);
        }
        prev->next=slow->next;
        return head;
        
    }
};