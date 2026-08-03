// Last updated: 8/3/2026, 1:12:59 PM
class Solution {
public:
    int finalElement(vector<int>& nums) {
        return max(nums[0],nums[nums.size()-1]);
    }
};