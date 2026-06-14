// Last updated: 6/14/2026, 9:50:23 PM
class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        return 1+(num-1)%9;
    }
};