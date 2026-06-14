// Last updated: 6/14/2026, 9:50:13 PM
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        string s = words[0];
        vector<string> str;

        for (char c : s) {
            int ind;

            for (int i = 1; i < words.size(); i++) {

                ind = words[i].find(c);
                if (ind == -1) {
                    break;
                } else {
                    words[i].erase(ind, 1);
                }
            }
            if (ind != -1)
                str.push_back(string(1, c));
        }
        return str;
    }
};