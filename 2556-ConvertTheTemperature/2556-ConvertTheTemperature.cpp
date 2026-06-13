// Last updated: 6/13/2026, 10:16:14 AM
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans(2);
        
        ans[0]=celsius+273.15;
        ans[1]=celsius*1.80 + 32.00;

        return ans;
    }
};