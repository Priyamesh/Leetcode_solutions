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
    //using recursion
    //step 1: we check the base condition
    //step 2: intitialize first and second
    //step 3: call for recursive call 
    //step 4: just swap the nodes accordingly
    
    ListNode* swapPairs(ListNode* head) {
        
        if(head==0 || head->next==0)
            return head;
        
        ListNode* first=head;
        ListNode* second=head->next;
        
        ListNode* templist=swapPairs(head->next->next);
        
        first->next=templist;
        second->next=first;
        
        return second;

    }
};