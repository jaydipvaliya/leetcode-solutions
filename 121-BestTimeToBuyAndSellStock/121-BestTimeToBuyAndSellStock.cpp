// Last updated: 5/16/2026, 9:12:00 AM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int price : prices){
            if(price < minPrice){
                minPrice = price;
            }
            else{
                maxProfit = max(maxProfit, price - minPrice);
            }
        }

        return maxProfit;
    }
};
