// Last updated: 6/5/2026, 2:00:18 PM
class Solution {
public:
    string removeDuplicates(string s) {
        string stk;                          
        for (char c : s) {
            if (!stk.empty() && stk.back() == c)
                stk.pop_back();             
            else
                stk.push_back(c);        
        }
        return stk;
    }
};