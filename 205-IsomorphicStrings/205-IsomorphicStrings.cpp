// Last updated: 4/15/2026, 10:35:56 AM
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, char> mapS, mapT;
        for(int i=0; i<s.length(); i++){
            char c1=s[i];
            char c2=t[i];

            if(mapS.count(c1) && mapS[c1]!=c2) return false;
            if(mapT.count(c2) && mapT[c2]!=c1) return false;

            mapS[c1]=c2;
            mapT[c2]=c1;
        }
        return true;
        
    }
};