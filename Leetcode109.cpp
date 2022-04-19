class Solution {
    
public:
    
    TreeNode *s(ListNode *head)
    {
        if(head == NULL)
        {
            return NULL;
        }
        if(head->next == NULL)
        {
            TreeNode *t = new TreeNode(head->val);
            return t;
        }
        ListNode *fast=head;
        ListNode *prev=NULL;
        ListNode *slow=head;
        while(fast and fast->next)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
            
        }
        if(prev !=NULL)
        {
             prev->next=NULL;
        }
            
        TreeNode *t = new TreeNode(slow->val);
        t->left = s(head);
        t->right = s(slow->next);
       
        return t;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        
       
         return(s(head));
        
        
    }
};