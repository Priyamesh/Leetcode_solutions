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
    
    /* Idea:
    check if two nodes are equal or not
    if not -> move the pointer ahead
    if yes -> note the value and move ahead till the values are same
    */
    
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* curr=dummy;
        
        //checking if there are 2 nodes after curr 
        //if not break the loop as for duplicate values we need two nodes
        while(curr->next && curr->next->next)
        {
            if(curr->next->val == curr->next->next->val)
            {
                //move ahead until values are same
                int key=curr->next->val;
                while(curr->next && curr->next->val==key)
                {
                    curr->next=curr->next->next;
                }
            }
            else
            {
                curr=curr->next;
            }
        }
        return dummy->next;
    }
};