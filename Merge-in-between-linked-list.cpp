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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* dummyhead, *start, *end;
        dummyhead = list1;
        int i = 0;
        ListNode* temp = list1;
        while(i<=b)
        {
            if(i==a-1)
            {
                start = temp;
            }
            if(i==b)
            {
                end = temp->next;
            }
            i++;
            temp = temp->next;
        }
        start->next = list2;
        temp = list2;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = end;
        return list1;
        
    }
};
