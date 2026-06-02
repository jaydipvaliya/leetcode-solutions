// Last updated: 6/2/2026, 5:42:46 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>frq;

        for(int n:nums){
            frq[n]++;
        }
        for(auto&[n, count]:frq){
            if(count == 1) return n;
        }
        return -1;
    }
};