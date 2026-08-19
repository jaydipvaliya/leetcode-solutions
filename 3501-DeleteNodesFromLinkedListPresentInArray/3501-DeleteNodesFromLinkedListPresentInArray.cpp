// Last updated: 8/19/2026, 1:21:57 PM
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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set <int> arr(nums.begin(), nums.end());

        ListNode* temp = new ListNode(0);
        temp->next = head;
        
        ListNode* curr = temp;

        while(curr->next != nullptr) {
            if(arr.count(curr->next->val)) {
                curr->next = curr->next->next;
            } 
            else{
                curr = curr->next;
            }
        }
        return temp->next;
    }
};