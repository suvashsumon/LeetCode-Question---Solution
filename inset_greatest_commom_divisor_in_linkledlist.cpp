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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* first = head;
        ListNode* second = head->next;
        if(!first || !second) return head;
        while(second)
        {
            ListNode* gcdnode = new ListNode(__gcd(first->val, second->val));
            gcdnode->next = second;
            first->next = gcdnode;

            first = second;
            second = second->next;
        }
        return head;
    }
};
