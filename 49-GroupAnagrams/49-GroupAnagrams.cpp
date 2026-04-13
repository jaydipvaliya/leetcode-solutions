// Last updated: 4/13/2026, 1:34:59 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> category;

        for(const string& str : strs){
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            category[sortedStr].push_back(str);
        }

        vector<vector<string>> result;
        for (const auto& group : category) {
            result.push_back(group.second);
        }

        return result;
    }
};