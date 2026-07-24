class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return NULL;
        ListNode dummy(0, head); 
        ListNode* slow = &dummy;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        slow->next = slow->next->next;

        return dummy.next;
    }
};