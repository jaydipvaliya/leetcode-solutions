// Last updated: 6/14/2026, 9:50:33 PM
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;

        for(char ch : columnTitle){
            int digit = ch - 'A'+1;
            res = res *26 +digit;
        }

        return res;
    }
};