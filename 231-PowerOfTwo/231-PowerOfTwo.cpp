// Last updated: 6/2/2026, 5:42:39 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && (n & (n-1)) == 0;
    }
};