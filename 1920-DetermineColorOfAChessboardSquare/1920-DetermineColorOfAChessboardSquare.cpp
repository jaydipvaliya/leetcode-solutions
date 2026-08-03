// Last updated: 8/3/2026, 1:13:46 PM
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int column = coordinates[0]-'a';
        int row = coordinates[1]-'1';

         return (column+row)%2 != 0;
    }
};