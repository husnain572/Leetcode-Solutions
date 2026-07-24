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
    ListNode* deleteMiddle(ListNode* head) {
            if (head == NULL || head->next == NULL) return NULL;
        int count = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            count += 1;
            temp = temp->next;
        }
        int n = (count / 2) - 1;
        int i = 0;
        ListNode* ptr = head;
        while (i < n) {
            ptr = ptr->next;
            i++;
        }
        ptr->next = ptr->next->next;

        return head;
    }
};