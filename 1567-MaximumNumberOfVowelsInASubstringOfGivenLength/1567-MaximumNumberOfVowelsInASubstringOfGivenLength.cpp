// Last updated: 6/2/2026, 5:42:19 PM
class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a','e','i','o','u'};

        int cur = 0;

        for(int i = 0; i<k;++i){
            if(vowels.count(s[i])) ++cur;
        }

        int maxV = cur;

        for (int i = k; i<(int)s.size(); ++i){
            if(vowels.count(s[i]))  ++cur;
            if(vowels.count(s[i-k])) --cur;
            maxV = max(maxV,cur);
        }
        return maxV;
    }
};