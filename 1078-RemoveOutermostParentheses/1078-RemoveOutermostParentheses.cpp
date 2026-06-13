// Last updated: 6/13/2026, 10:16:35 AM
class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int count = 0;

        for (char c : s) {
            if (c == '(') {
                if (count > 0) result += c;   
                count++;
            } else {
                count--;
                if (count > 0) result += c;   
            }
        }
        
        return result;
    }
};