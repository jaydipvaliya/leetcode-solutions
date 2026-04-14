// Last updated: 4/14/2026, 1:47:50 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string subStr = strs[0];

        for(int i=1; i<strs.size(); ++i){
            while(strs[i].find(subStr)!=0){
                subStr.pop_back();
            }
        }
        return subStr;
    }
};