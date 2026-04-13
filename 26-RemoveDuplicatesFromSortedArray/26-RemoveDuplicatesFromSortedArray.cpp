// Last updated: 4/13/2026, 2:10:17 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int j = 1; j< nums.size(); ++j){
            if(nums[i]!=nums[j]){
                ++i;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};