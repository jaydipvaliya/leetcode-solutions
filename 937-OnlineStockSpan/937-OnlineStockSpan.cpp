// Last updated: 6/2/2026, 5:42:26 PM
class StockSpanner {
public:
    stack<pair<int, int>> st; 

    StockSpanner() {}

    int next(int price) {
        int span = 1;
        while (!st.empty() && st.top().first <= price) {
            span += st.top().second;
            st.pop();
        }
        st.push({price, span});
        return span;
    }
};