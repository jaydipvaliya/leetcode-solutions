// Last updated: 7/28/2026, 10:51:59 AM
class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1;
        while(num>0){
            num -= i;     
            i +=2;        
            if(num==0) return true;
        }
        return false;
    }
};