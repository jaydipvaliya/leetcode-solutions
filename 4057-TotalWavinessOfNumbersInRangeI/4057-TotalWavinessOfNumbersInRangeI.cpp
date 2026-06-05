// Last updated: 6/5/2026, 2:00:05 PM
class Solution {
public:
    // Returns waviness of a single number
    int waviness(int n) {
        vector<int> d;
        while (n > 0) {
            d.push_back(n % 10);
            n /= 10;
        }
        reverse(d.begin(), d.end()); // most-significant digit first

        int len = d.size();
        if (len < 3) return 0;

        int count = 0;
        for (int i = 1; i < len - 1; ++i) {
            if (d[i] > d[i-1] && d[i] > d[i+1]) ++count; // peak
            if (d[i] < d[i-1] && d[i] < d[i+1]) ++count; // valley
        }
        return count;
    }

    int totalWaviness(int num1, int num2) {
        int total = 0;
        for (int n = num1; n <= num2; ++n)
            total += waviness(n);
        return total;
    }
};