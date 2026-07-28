// Last updated: 7/28/2026, 10:51:55 AM
class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;

        for (char c : s)
            ans ^= c;

        for (char c : t)
            ans ^= c;

        return ans;
    }
};