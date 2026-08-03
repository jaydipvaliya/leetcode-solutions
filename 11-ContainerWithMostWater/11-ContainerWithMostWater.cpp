// Last updated: 8/3/2026, 1:17:20 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int area = 0;

        while (left < right) {
            int l = right - left;
            int h = min(height[right], height[left]);
            area = max(area, h * l);

            if (height[right] > height[left]) {
                left++;
            } else {
                right--;
            }
        }
        return area;
    }
};