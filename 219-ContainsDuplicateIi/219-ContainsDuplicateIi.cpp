// Last updated: 6/14/2026, 9:50:28 PM
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        
       for(int i = 0; i<n; i++){
         for(int j = i+1; j<=i+k && j< n; j++){
            if(nums[i] == nums[j] && abs(i-j)<=k){
               return true;
            }
         }
       }
       return false;
    }
};
