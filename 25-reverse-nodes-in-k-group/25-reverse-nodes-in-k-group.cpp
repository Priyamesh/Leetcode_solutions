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
    ListNode* reverse(ListNode* head,ListNode* tail)
    {
        ListNode* prev=0;
        ListNode* next_node=0;
        while(head!=tail)
        {
            next_node=head->next;
            head->next=prev;
            prev=head;
            head=next_node;
        }
        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* curr=head;
        for(int i=1;i<=k;i++)
        {
            if(curr==0)
                return head;
            curr=curr->next;    
        }
        
        ListNode* rev=reverse(head,curr);
        
        ListNode* templist=reverseKGroup(curr,k);
        
        head->next=templist;
        
        return rev;
        
    }
};