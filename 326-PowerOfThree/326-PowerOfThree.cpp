// Last updated: 6/2/2026, 5:42:33 PM
class Solution {
public:
    bool isPowerOfThree(int n) {
        return n>0 && 1162261467 % n == 0;
    }
};
