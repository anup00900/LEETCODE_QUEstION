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
    
    ListNode *revers(ListNode *head)
    {
        ListNode *curr=head;
        ListNode *prev=NULL;
        ListNode *nex;
        while(curr!=NULL)
        {
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
            
        }
        return prev;
    }
    
    
    
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>v;
        
        if(head==NULL)
        {
            return v;
        }
        
        ListNode *temp = revers(head);
        
        stack<int>st;
        
        while(temp)
        {
            if(st.empty())
            {
                st.push(temp->val);
                v.push_back(0);
            }
            else
            {
                while(!st.empty() and st.top()<=temp->val)
                {
                    st.pop();
                }
                if(st.empty())
                {
                     st.push(temp->val);
                v.push_back(0);
                }
                else
                {
                    v.push_back(st.top());
                    st.push(temp->val);
                    
                }
            }
            temp=temp->next;
        }
        
        reverse(v.begin(),v.end());
        return v;
        
        
        
    }
};