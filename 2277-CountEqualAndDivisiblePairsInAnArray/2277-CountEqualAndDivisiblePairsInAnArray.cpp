// Last updated: 7/28/2026, 10:51:26 AM
class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count = 0;

        for(int i = 0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i] == nums[j] && (i*j)%k == 0){
                    count++;
                }
            }
        }
        return count;
    }
};