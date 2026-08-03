// Last updated: 8/3/2026, 1:14:49 PM
class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ans;

        int i = 0;
        int n = chars.size();

        while (i < n) {
            char ch = chars[i];
            int count = 0;

            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            ans.push_back(ch);

            if (count > 1) {
                string s = to_string(count);
                for (char c : s)
                    ans.push_back(c);
            }
        }

        chars = ans;
        return ans.size();
    }
};