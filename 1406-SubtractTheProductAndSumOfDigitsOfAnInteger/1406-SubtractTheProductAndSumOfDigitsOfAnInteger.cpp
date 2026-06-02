// Last updated: 6/2/2026, 5:42:21 PM
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1, sum = 0;

        while (n > 0) {
            int digit = n % 10;
            product *= digit;
            sum += digit;
            n /= 10;
        }

        return product - sum;
    }
};