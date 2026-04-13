// Last updated: 4/13/2026, 1:34:55 PM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> frequency;
        for (int num : arr) {
            frequency[num]++;
        }
        unordered_set<int> occurrences;

        for(const auto& pair : frequency) {
            occurrences.insert(pair.second);
        }
        return occurrences.size() == frequency.size();
    }
};