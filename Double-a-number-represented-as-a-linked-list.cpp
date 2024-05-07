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

    int multiply(ListNode* head)
    {
        if(head==NULL) return 0;
        int dval = head->val * 2 + multiply(head->next);
        head->val = dval%10;
        return dval/10;
    }


    ListNode* doubleIt(ListNode* head) {
        int carry = multiply(head);
        if(carry>0) 
        {
            head = new ListNode(carry, head);
        } 

        return head;
    }
};
