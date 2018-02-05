struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) { val = x; next = 0; }
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = 0;
        ListNode* curr = head;
        while (curr != 0) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};