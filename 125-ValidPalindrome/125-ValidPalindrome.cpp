// Last updated: 4/24/2026, 12:03:28 PM
class Solution {
public:
    bool isPalindrome(string s) {
         string word = "";
        for (char c : s) {
            if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
                word += tolower(c);
            }
        }

        int left = 0, right = word.size() - 1;
        while (left < right) {
            if (word[left] != word[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};