// Last updated: 6/14/2026, 9:49:54 PM
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int,int> freq;

        for(int val : nums){
            freq[val]++;
        }

        for(auto& it : freq){
            int v = it.first;
            int count = it.second;

            for(int i = 0; i< count; i++){

                if (ans.size() <= i) {
                    ans.push_back({});
                }
                ans[i].push_back(v);
            }
        }
         return ans;
    }
};