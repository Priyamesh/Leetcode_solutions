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
        
        ListNode *front = head;
        ListNode *back = head;
        
        for(int i=1;i<=n;i++)
        {
            front=front->next;
        }
        
        if(front==0)
            return head->next;
        
        while(front->next)
        {
            front=front->next;
            back=back->next;
        }
        
        back->next=back->next->next;
        
        return head;
    }
};