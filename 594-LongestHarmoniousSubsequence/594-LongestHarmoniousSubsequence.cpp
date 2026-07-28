// Last updated: 7/28/2026, 10:51:52 AM
class Solution {
public:
    int findLHS(vector<int>& nums) {
       int low = 0;
       int maxLen = 0;
       sort(nums.begin(),nums.end());

       for(int high = 0;high<nums.size();high++){
        while(nums[high]-nums[low]>1){
            low++;
        }
        if(nums[high]-nums[low]==1){
            maxLen=max(maxLen,high-low+1);
        }
       }
       return maxLen;
    }
};