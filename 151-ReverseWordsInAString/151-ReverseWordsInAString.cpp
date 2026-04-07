// Last updated: 4/7/2026, 4:53:13 PM
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        vector<string> words;
        string word;
        for (int i = 0; i < n; ++i) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                if (!word.empty()) {
                    words.push_back(word);
                    word.clear();
                }
            }
        }
        if (!word.empty()) {
            words.push_back(word);
        }

        string result;
        for (int i = words.size() - 1; i >= 0; --i) {
            result += words[i];
            if (i > 0) {
                result += ' ';
            }
        }
        return result;
    }
};