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
        ListNode dummy(0, head);

        ListNode* fwd = &dummy;
        ListNode* bwd = &dummy;

        // Move fwd n+1 positions ahead
        for (int i = 0; i <= n; i++) {
            fwd = fwd->next;
        }

        // Move both until fwd reaches nullptr
        while (fwd != nullptr) {
            fwd = fwd->next;
            bwd = bwd->next;
        }

        // bwd is now just before the node to remove
        bwd->next = bwd->next->next;

        return dummy.next;
    }
};