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
    ListNode* swapNodes(ListNode* head, int k) {
        int n = 0;
        ListNode *temp = head;
        while(temp)
        {
            n++;
            temp = temp->next;
        }
        ListNode *left, *right;
        temp = head;
        int l = k, r = n-k+1;
        n = 0;
        while(temp)
        {
            n++;
            if(n==l) left = temp;
            if(n==r) right = temp;
            temp = temp->next;
        }
        l = left->val;
        left->val = right->val;
        right->val = l;
        return head;
    }
};
