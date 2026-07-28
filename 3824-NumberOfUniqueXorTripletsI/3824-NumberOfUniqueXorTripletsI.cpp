// Last updated: 7/28/2026, 10:51:16 AM
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();

        if (n < 3)
            return n;

        int ans = 1;
        while (ans <= n)
            ans <<= 1;

        return ans;
    }
};