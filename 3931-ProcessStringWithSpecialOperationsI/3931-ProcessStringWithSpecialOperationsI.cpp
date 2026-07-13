// Last updated: 7/13/2026, 9:02:43 PM
class Solution {
public:
    string processStr(string s) {
        string str = "";
        for(int i = 0; i<s.size(); i++){
            if(!str.empty() && s[i] == '*'){
                str.pop_back();
            }
            else if(!str.empty() && s[i] == '%'){
                reverse(str.begin(),str.end());
            }
             else if(!str.empty() && s[i] == '#'){
                str = str+str;
            }
            else if(s[i] !='*' && s[i] !='#' && s[i] !='%'){
                str+=s[i];
            }
        }
        return str;
    }
};