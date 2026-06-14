// Last updated: 6/14/2026, 9:50:07 PM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>result;

        for(int i = 0; i < candies.size(); i++){
            int maxCandies = candies[0];

        for(int j = 0; j < candies.size(); j++){
            maxCandies = max(maxCandies, candies[j]);
        }

        result.push_back(candies[i] + extraCandies >= maxCandies);
        }
 return result;
    }
};