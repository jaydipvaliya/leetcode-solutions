// Last updated: 5/16/2026, 9:11:55 AM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int exp = n*(n+1)/2;
        int act = 0;

        for(int x : nums) act+=x;
        return exp-act;
    }
};
