// Last updated: 6/2/2026, 5:42:43 PM
class Solution {
public:
    
      int squareSum(int n){
        int sum = 0;
        while(n>0){
            int d = n%10;
            sum+=d*d;
            n/=10;
        }
        return sum;
      }

    bool isHappy(int n) {
        int first = n;
        int second = squareSum(n);

        while (second !=1 && first!=second){
            first = squareSum(first);
            second = squareSum(squareSum(second));
        }

        return second == 1;
    }
};