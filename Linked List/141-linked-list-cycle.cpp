// LeetCode 141: Linked List Cycle

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr) return false;

        map<ListNode*, bool> visited;
        while(head != nullptr) {
            if(visited[head] == true) return true;
            visited[head] = true;
            head = head->next;
        }
        
        return false;
    }
};