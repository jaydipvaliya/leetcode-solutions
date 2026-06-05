// Last updated: 6/5/2026, 2:00:27 PM
class Solution {
public:
    string decodeString(const string& s) {
        int i = 0;
        return decode(s, i);
    }

private:
    string decode(const string& s, int& i) {
        string result;

        while (i < (int)s.size() && s[i] != ']') {
            if (isdigit(s[i])) {
                
                int k = 0;
                while (i < (int)s.size() && isdigit(s[i]))
                    k = k * 10 + (s[i++] - '0');

                ++i;                          
                string inner = decode(s, i);  
                ++i;                         

                while (k--) result += inner;
            } else {
                result += s[i++];             
            }
        }

        return result;
    }
};