// Last updated: 7/13/2026, 9:03:41 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = int(nums.size()) - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid;
            } 
            else if (nums[mid] < target) {
                left = mid + 1;   
            } 
            else {
                right = mid - 1;
            }
        }
        
        return -1;
    }
};