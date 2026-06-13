// Last updated: 6/13/2026, 10:16:21 AM
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less, equal, greater;

        for (int x : nums) {
            if      (x < pivot)  less.push_back(x);
            else if (x == pivot) equal.push_back(x);
            else                 greater.push_back(x);
        }

        vector<int> result;
        result.reserve(nums.size());

        for (int x : less)    result.push_back(x);
        for (int x : equal)   result.push_back(x);
        for (int x : greater) result.push_back(x);

        return result;
    }
};