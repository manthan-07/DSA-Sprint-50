// LeetCode 19: Remove Nth Node From End of List

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode ans(0,head);

        ListNode* slow = &ans;
        ListNode* fast = &ans;

        for(int i = 0; i <= n; i++) fast = fast->next;

        while(fast != nullptr){
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;

        return ans.next;
    }
};