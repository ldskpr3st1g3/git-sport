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
        ListNode* result = new ListNode();
        auto temp = result;
        int helper = 0;
        int sum;
        while(l1 || l2 || helper)
        {
            sum = helper;
            if(l1)
                sum+=l1->val, l1=l1->next;
            if(l2) 
                sum += l2->val, l2=l2->next;
            helper = sum / 10;
            temp->next = new ListNode(sum % 10);
            temp=  temp->next;
        }
        return result -> next;
        
    }
};