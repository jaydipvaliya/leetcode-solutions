// Last updated: 7/28/2026, 10:52:00 AM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> ans;

        for (int num : nums2) {
            if (s.count(num)) {
                ans.push_back(num);
                s.erase(num); 
            }
        }

        return ans;
    }
};