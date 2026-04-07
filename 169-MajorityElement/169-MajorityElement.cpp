// Last updated: 4/7/2026, 11:34:57 AM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> countMap;
        int majorityCount = nums.size() / 2;
        
        for (int num : nums) {
            countMap[num]++;
          
        }
        
        for (const auto& it : countMap) {
            if (it.second > majorityCount) {
                return it.first;
            }
        }

        return -1;
    }
};