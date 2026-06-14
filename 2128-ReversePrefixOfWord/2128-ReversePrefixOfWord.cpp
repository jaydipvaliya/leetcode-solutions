// Last updated: 6/14/2026, 9:50:00 PM
class Solution {
public:
    string reversePrefix(string word, char ch) {
     
        int end = word.find(ch);

        if(end == -1) return word;

         string ans = "";

        for (int i = end; i >= 0; i--) {
            ans += word[i];
        }

        for (int i = end + 1; i < word.size(); i++) {
            ans += word[i];
        }

        return ans;
    }
};