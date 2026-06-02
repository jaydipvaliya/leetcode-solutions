// Last updated: 6/2/2026, 5:42:48 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result =0 ;
        for (int num : nums){
            result ^=num;
        }
        return result;
    }
};