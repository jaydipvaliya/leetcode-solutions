// Last updated: 6/13/2026, 10:16:08 AM
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;

        for (int runner : order) {
            for (int friendId : friends) {
                if (runner == friendId) {
                    ans.push_back(runner);
                    break;
                }
            }
        }

        return ans;
    }
};