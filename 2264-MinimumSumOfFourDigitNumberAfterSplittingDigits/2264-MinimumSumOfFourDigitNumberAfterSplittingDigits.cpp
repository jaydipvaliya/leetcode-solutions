// Last updated: 6/2/2026, 5:42:12 PM
class Solution {
public:
    int minimumSum(int num) {
        int digits[4];

        for (int i = 3; i >= 0; i--) {
            digits[i] = num % 10;
            num /= 10;
        }

        sort(digits, digits + 4);

        int num1 = digits[0] * 10 + digits[2];
        int num2 = digits[1] * 10 + digits[3];

        return num1 + num2;
    }
};