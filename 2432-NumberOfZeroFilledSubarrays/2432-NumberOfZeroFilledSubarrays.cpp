// Last updated: 6/5/2026, 2:00:07 PM
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
    long long result = 0;
    int zeroCount = 0;

    for (int num : nums) {
        if (num == 0) {
            zeroCount++;
        } else {
            result += zeroCount * (zeroCount + 1LL) / 2;
            zeroCount = 0;
        }
    }

    result += zeroCount * (zeroCount + 1LL) / 2;

    return result;
}
};