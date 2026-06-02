// Last updated: 6/2/2026, 5:42:28 PM
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet(jewels.begin(),jewels.end());
        int count = 0;
        for (char s : stones){
            if(jewelSet.count(s)) count++;
        }
        return count;
    }
};