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
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=0;
        ListNode* next_node=0;
        
        while(head)
        {
            next_node=head->next;
            head->next=prev;
            prev=head;
            head=next_node;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast->next && fast->next->next )
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* revhead=reverse(slow->next);
        slow->next=0;
        
        ListNode* front=head;
        
        while(front && revhead)
        {
            if(front->val==revhead->val)
            {
                front=front->next;
                revhead=revhead->next;
            }
            else
                return false;
        }
        return true;
    }
};