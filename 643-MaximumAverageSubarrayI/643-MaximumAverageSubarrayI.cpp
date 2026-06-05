// Last updated: 6/5/2026, 2:00:22 PM
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int currSum = 0;
        for(int i=0; i<k; i++){
            currSum += nums[i];
        }

        int maxSum = currSum;

        for(int i=k; i<nums.size(); i++){
            currSum = currSum - nums[i-k] + nums[i];
            maxSum = max(maxSum, currSum);
        }
        return (double) maxSum/k;
    }
};