// Last updated: 6/2/2026, 5:42:24 PM
class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        result.reserve(address.size()+6);

        for(char c : address){
            if(c == '.') result+="[.]";
            else   result+=c;
        }
        return result;
    }
};

