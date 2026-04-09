// Last updated: 4/9/2026, 11:42:15 AM
class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            while (left < right && find(vowels.begin(), vowels.end(), s[left]) == vowels.end()) {
                left++;
            }
            while (left < right && find(vowels.begin(), vowels.end(), s[right]) == vowels.end()) {
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