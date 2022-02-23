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
    ListNode* insertionSortList(ListNode* head) {
        ListNode*dummy=new ListNode(-20);
        dummy->next=head;
        ListNode* curr=dummy->next;
        ListNode* prev=dummy;
        
        while(curr!=NULL)
        {
            if(curr->val<prev->val)
            {
                ListNode* temp=dummy;
                ListNode*nex=NULL;
                
                while(temp->da < curr->data)
                {
                    nex=temp;
                    temp=temp->next;
                    
                    
                }
                nex->next=curr;
                ListNode*nec=curr->next;
                prev->next=nec;
                curr->next=temp;
                curr=nec;
                
                
            }
            else
            {
                prev=curr;
                curr=curr->next;
            }
            
        }
        return dummy->next;
    }
};