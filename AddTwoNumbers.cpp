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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode * temp = new ListNode(0);
        temp->next=NULL;
        ListNode *he=temp;
        ListNode *t1=l1;
        ListNode *t2=l2;
        int carry=0;
        while(t1!=NULL && t2!=NULL)
        {
            int sum = t1->val+t2->val+carry;
            carry=sum/10;
            ListNode * tem= new ListNode(sum%10);
            tem->next=NULL;
            temp->next=tem;
            temp=temp->next;
            t1=t1->next;
            t2=t2->next;
          
            
        }
        while(t1==NULL && t2!=NULL)
        {
            int sum = t2->val+carry;
            carry=sum/10;
            ListNode * tem= new ListNode(sum%10);
            tem->next=NULL;
            temp->next=tem;
            temp=temp->next;
            t2=t2->next;
        }
        while(t1!=NULL && t2==NULL)
        {
            int sum = t1->val+carry;
            carry=sum/10;
            ListNode * tem= new ListNode(sum%10);
            tem->next=NULL;
            temp->next=tem;
            temp=temp->next;
            t1=t1->next;
        }
        if(carry!=0)
        {
             ListNode * tem= new ListNode(carry);
            tem->next=NULL;
            temp->next=tem;
            
        }
       
        
        
        
        return he->next;
        
    }
};