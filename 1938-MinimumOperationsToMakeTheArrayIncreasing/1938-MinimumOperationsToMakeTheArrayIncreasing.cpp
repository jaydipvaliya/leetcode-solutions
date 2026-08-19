// Last updated: 8/19/2026, 1:22:24 PM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;

        for(int i = 1; i<nums.size(); i++){
            if(nums[i] <= nums[i-1]){
                count += (nums[i-1] +1) - nums[i];
                nums[i] = nums[i-1]+1;
            }
        }
        return count;
    }
};