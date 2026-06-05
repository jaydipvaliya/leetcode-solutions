// Last updated: 6/5/2026, 2:00:41 PM
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = (int)nums.size();
        k %= n;
        if (k == 0) return;

        reverse(nums.begin(), nums.end());          // Step 1: reverse all
        reverse(nums.begin(), nums.begin() + k);    // Step 2: reverse first k
        reverse(nums.begin() + k, nums.end());      // Step 3: reverse rest
    }
};