// Last updated: 6/2/2026, 5:42:15 PM
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());

        int totalCost = 0;
        for (int i = 0; i < (int)cost.size(); ++i) {
            if (i % 3 == 2) continue; // free candy, skip
            totalCost += cost[i];
        }

        return totalCost;
    }
};