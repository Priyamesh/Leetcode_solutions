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
    check if two nodes are qual or not
    if not -> move the pointer ahead
    if yes -> note the value and move ahead till the values are same
    */

    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode *dummy=new ListNode(-1);
        dummy->next=head;
        ListNode *curr=dummy;
        
        //checking if there are 2 nodes after curr 
        //if not break the loop as for duplicate values we need two nodes
        while(curr->next && curr->next->next)
        {
            //if the nodes val are not equal move ahead
            if(curr->next->val != curr->next->next->val)
            {
                curr=curr->next;
            }
            else
            {
                //if nodes have equal val note the val
                //and loop in till we get the same value 
                int key=curr->next->val;
                while(curr->next && curr->next->val==key)
                {
                    //change the pointer
                    curr->next=curr->next->next;
                }
            }
        }
        
        return dummy->next;
    }
};