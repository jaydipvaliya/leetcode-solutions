// Last updated: 6/5/2026, 2:00:25 PM
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        if (s.size() < p.size()) return ans;

        vector<int> cntP(26, 0), cntS(26, 0);

        for (char c : p)
            cntP[c - 'a']++;

        int k = p.size();

        for (int i = 0; i < k; i++)
            cntS[s[i] - 'a']++;

        if (cntS == cntP)
            ans.push_back(0);

        for (int i = k; i < s.size(); i++) {
            cntS[s[i] - 'a']++;
            cntS[s[i - k] - 'a']--;

            if (cntS == cntP)
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};