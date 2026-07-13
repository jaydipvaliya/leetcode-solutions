// Last updated: 7/13/2026, 9:03:05 PM
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;

        for (const auto& customer : accounts) {
            int wealth = 0;

            for (int money : customer) {
                wealth += money;
            }

            maxWealth = max(maxWealth, wealth);
        }

        return maxWealth;
    }
};