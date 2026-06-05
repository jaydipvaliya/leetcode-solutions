// Last updated: 6/5/2026, 2:00:50 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] > prices[i - 1]) {
            maxProfit += prices[i] - prices[i - 1];
        }
    }

    return maxProfit;
}
};