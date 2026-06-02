// Last updated: 6/2/2026, 5:42:49 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>nSet(nums.begin(),nums.end());
        int len = 0;

        for(int num : nSet){
            if(nSet.count(num-1) == 0){
                int cur = num;
                int str = 1;

                while(nSet.count(cur+1)){
                    cur++;
                    str++;
                }
                len = max(len ,str);
            }
        }
        return len;
    }
};