// Last updated: 6/2/2026, 5:42:30 PM
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = (int)temperatures.size();
        vector<int> result(n, 0);
        stack<int> st;                          

        for (int i = 0; i < n; ++i) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int j = st.top();
                st.pop();
                result[j] = i - j;
            }
            st.push(i);
        }

        return result;
    }
};