// Last updated: 7/13/2026, 9:03:02 PM
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        for(auto item:items){
            for(int i=0;i<item.size();i++){
                if( (ruleKey == "type" && ruleValue == item[0]) || (ruleKey == "color" && ruleValue == item[1]) || (ruleKey == "name" && ruleValue == item[2]) ) 
                count++;
                break;
            }
        }
        return count;
    }
};