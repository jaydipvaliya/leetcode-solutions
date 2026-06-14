// Last updated: 6/14/2026, 9:49:49 PM
class Solution {
public:
    int digitFrequencyScore(int n) {
       
       int sum = 0;

       while(n != 0){
         sum += n%10;
         n/=10;
       }

       return sum;
                               
    }
};