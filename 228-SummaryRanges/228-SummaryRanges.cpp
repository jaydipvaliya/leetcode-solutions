// Last updated: 6/14/2026, 9:50:27 PM
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n = nums.size(), i = 0;

        while (i < n) {
            int start = i;
            while (i + 1 < n && nums[i + 1] == nums[i] + 1)
                ++i;                        

            if (start == i)
                result.push_back(to_string(nums[start]));
            else
                result.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
            ++i;                            
        }
        return result;
    }
};