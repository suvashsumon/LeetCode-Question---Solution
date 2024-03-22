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
    bool isPalindrome(ListNode* head) {
        ListNode *slow, *fast;
        fast = head;
        slow = head;

        // let find the middle
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        // so middle is slow pointer

        // let reverse the 2nd half
        ListNode *left, *right;
        left = nullptr;
        while(slow)
        {
            right = slow->next;
            slow->next = left;
            left = slow;
            slow = right;
        }
        // the tail will indicated by left

        // lets check if it is palindrome or not
        ListNode *tail = left;
        while(tail)
        {
            if(tail->val!=head->val)
            {
                return false;
            }
            tail = tail->next;
            head = head->next;
        }
        return true;
    }
};
