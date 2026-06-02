// Last updated: 6/2/2026, 5:42:36 PM
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>frq;
        vector<int>res;
        for(int n:nums){
            frq[n]++;
        }
        for(auto&[n, count]:frq){
            if(count == 1){
                res.push_back(n);
            } 
        }
        return res;
    }
};