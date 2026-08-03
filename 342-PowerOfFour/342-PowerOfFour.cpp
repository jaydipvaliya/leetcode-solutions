// Last updated: 8/3/2026, 1:15:10 PM
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;

        while (n % 4 == 0) {
            n /= 4;
        }

        return n == 1;
    }
};