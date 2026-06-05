// Last updated: 6/5/2026, 2:00:04 PM
class Solution {
public:
    int calc(vector<int>& a1, vector<int>& t1,
             vector<int>& a2, vector<int>& t2) {
        int minEnd = INT_MAX;
        for (int i = 0; i < (int)a1.size(); ++i) {
            minEnd = min(minEnd, a1[i] + t1[i]);
        }
        
        int ans = INT_MAX;
        for (int j = 0; j < (int)a2.size(); ++j) {
            int startSecond = max(minEnd, a2[j]);
            ans = min(ans, startSecond + t2[j]);
        }
        return ans;
    }

    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration,
                           vector<int>& waterStartTime, vector<int>& waterDuration) {
        int landFirst  = calc(landStartTime,  landDuration,
                              waterStartTime, waterDuration);
        int waterFirst = calc(waterStartTime, waterDuration,
                              landStartTime,  landDuration);
        return min(landFirst, waterFirst);
    }
};