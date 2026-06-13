// Last updated: 6/13/2026, 10:16:29 AM
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int>freq;
        int res = 0;

        for(int x : nums){
            res+= freq[x];
            freq[x]++;
        }

        return res;
    }
};