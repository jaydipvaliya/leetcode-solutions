// Last updated: 8/3/2026, 1:15:24 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(int i = 0; i<nums.size(); i++){
            if(freq[nums[i]]==0){
                freq[nums[i]] = 1;
            }
            else{
                return nums[i];
            }
        }
        return -1;
    }
};