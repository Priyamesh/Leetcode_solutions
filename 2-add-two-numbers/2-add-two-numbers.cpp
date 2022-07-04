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
        
        int carry=0;
        
        ListNode* dummy=new ListNode(-1);
        ListNode* curr=dummy;
        
        while(l1 || l2 || carry)
        {
            
            int num1=0;
            int num2=0;
            
            if(l1)
            {
                num1=l1->val;
                l1=l1->next;
            }
            
            if(l2)
            {
                num2=l2->val;
                l2=l2->next;
            }
            
            int sum= num1+num2+carry;
            
            curr->next=new ListNode(sum%10);
            curr=curr->next;
            carry=sum/10;
            
        }
        return dummy->next;
    }
};