// Last updated: 6/5/2026, 2:00:01 PM
class Solution {
public:
    long long earliestFinishTime(
        vector<int>& landStartTime, vector<int>& landDuration,
        vector<int>& waterStartTime, vector<int>& waterDuration) {

        // Helper: given first-ride finishes at time t, 
        // find best second-ride finish time
        // secondRides sorted by startTime
        // suffMin[i] = min(startTime[j] + duration[j]) for j >= i
        // prefMinDur[i] = min(duration[j]) for j <= i
        auto best = [&](long long t,
                        vector<pair<long long,long long>>& secondRides,
                        vector<long long>& suffMin,
                        vector<long long>& prefMinDur) -> long long {
            int n = secondRides.size();
            // Binary search: first index where secondRides[pos].first >= t
            int lo = 0, hi = n;
            while (lo < hi) {
                int mid = (lo + hi) / 2;
                if (secondRides[mid].first >= t) hi = mid;
                else lo = mid + 1;
            }
            int pos = lo;

            long long ans = LLONG_MAX;
            // Rides that open at or after t: no waiting, cost = startTime + duration
            if (pos < n) ans = min(ans, suffMin[pos]);
            // Rides that open before t: we arrive at t, cost = t + duration
            if (pos > 0) ans = min(ans, t + prefMinDur[pos - 1]);
            return ans;
        };

        // Build sorted second-ride arrays + suffix/prefix arrays
        int m = waterStartTime.size(), n = landStartTime.size();

        // Sort water rides by startTime
        vector<pair<long long,long long>> water(m), land(n);
        for (int i = 0; i < m; i++)
            water[i] = {waterStartTime[i], waterDuration[i]};
        for (int i = 0; i < n; i++)
            land[i] = {landStartTime[i], landDuration[i]};

        sort(water.begin(), water.end());
        sort(land.begin(), land.end());

        auto buildArrays = [&](vector<pair<long long,long long>>& rides,
                               vector<long long>& suffMin,
                               vector<long long>& prefMinDur) {
            int sz = rides.size();
            suffMin.resize(sz + 1, LLONG_MAX);
            prefMinDur.resize(sz, LLONG_MAX);
            for (int i = sz - 1; i >= 0; i--)
                suffMin[i] = min(suffMin[i + 1], rides[i].first + rides[i].second);
            prefMinDur[0] = rides[0].second;
            for (int i = 1; i < sz; i++)
                prefMinDur[i] = min(prefMinDur[i - 1], rides[i].second);
        };

        vector<long long> waterSuffMin, waterPrefMinDur;
        vector<long long> landSuffMin,  landPrefMinDur;
        buildArrays(water, waterSuffMin, waterPrefMinDur);
        buildArrays(land,  landSuffMin,  landPrefMinDur);

        long long ans = LLONG_MAX;

        // Order A: Land first, then Water
        for (int i = 0; i < n; i++) {
            long long t = land[i].first + land[i].second;
            long long res = best(t, water, waterSuffMin, waterPrefMinDur);
            if (res != LLONG_MAX) ans = min(ans, res);
        }

        // Order B: Water first, then Land
        for (int i = 0; i < m; i++) {
            long long t = water[i].first + water[i].second;
            long long res = best(t, land, landSuffMin, landPrefMinDur);
            if (res != LLONG_MAX) ans = min(ans, res);
        }

        return ans;
    }
};