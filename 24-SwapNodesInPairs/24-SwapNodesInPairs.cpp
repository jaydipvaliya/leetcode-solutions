// Last updated: 8/19/2026, 1:25:16 PM
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* ptr1 = dummy;
        ListNode* ptr2 = head;
        ListNode* ptr3 = head;
        if (head && head->next)
            ptr3 = ptr3->next;
        else
            return head;
        while (ptr2 != NULL && ptr3 != NULL) {
            ptr2->next = ptr3->next;
            ptr3->next = ptr2;
            ptr1->next = ptr3;
            if (ptr2->next)
                ptr3 = ptr2->next->next;
            else
                break;
            ptr1 = ptr2;
            ptr2 = ptr2->next;
        }
        head = dummy->next;
        dummy->next = NULL;
        return head;
    }
};