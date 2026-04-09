// Last updated: 4/9/2026, 12:09:44 PM

class Solution {
public:

    bool isLetter(char c) {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    }

    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            while (left < right && !isLetter(s[left])) {
                left++;
            }
            while (left < right && !isLetter(s[right])) {
                right--;
            }
            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};