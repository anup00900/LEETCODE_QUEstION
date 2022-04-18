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
    ListNode* mergeNodes(ListNode* head) {
        
        
        ListNode *dummy = new ListNode(-1);
        ListNode *p = dummy;
        int sum=0;
        ListNode *t1=head;
        ListNode *t2=head->next;
        while(t2)
        {
            sum=0;
            while(t2->val !=0)
            {
                sum+=t2->val;
                t2=t2->next;
            }
            p->next = new ListNode(sum);
            p=p->next;
            t1=t2;
            t2=t2->next;
            
        }
        return dummy->next;
        
        
        
        
        
    }
};