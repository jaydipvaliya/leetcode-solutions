// Last updated: 8/19/2026, 1:23:11 PM
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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> t;
        ListNode* temp = head;
        while (temp != NULL) {
            t.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> ans(t.size());
        stack<int> st;
        for (int i = t.size() - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= t[i])
                st.pop();
            if (st.empty())
                ans[i] = 0;
            else
                ans[i] = st.top();
                st.push(t[i]);
        }
        return ans;
    }
};