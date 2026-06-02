// Last updated: 6/2/2026, 5:42:22 PM
class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0;
        int count = 0;

        for(char c :s ){
            if(c == 'R') balance++;
            else   balance-- ;

            if(balance == 0) count ++;
        }

        return count ;
    }
};