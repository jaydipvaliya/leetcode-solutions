// Last updated: 7/13/2026, 9:03:07 PM
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "";
        string s2 = "";

        for(const string& s : word1)
            s1 += s;
        for(const string& s : word2)
            s2 += s;

        return s1==s2;
    }
};