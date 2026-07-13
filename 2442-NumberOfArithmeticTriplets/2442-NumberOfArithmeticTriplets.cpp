// Last updated: 7/13/2026, 9:02:53 PM
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0;

        for(int i = 0 ; i<nums.size();i++){
            for(int j = 0; j<nums.size(); j++){
                for(int k = 0; k<nums.size(); k++){
                    if((nums[j]-nums[i]==diff) && (nums[k]-nums[j]==diff)){
                        count ++;
                    }
                }
            }
        }

        return count;
    }
};