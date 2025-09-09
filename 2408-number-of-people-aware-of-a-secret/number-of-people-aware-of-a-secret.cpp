class Solution {
public:
    int mod = 1e9+7;
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<long> dp(n+1,0);
        dp[1] = 1;  
        long long currSharers = 0;

        for (int day=2; day<=n; day++) {
            if (day-delay >= 1) currSharers = (currSharers + dp[day-delay]) % mod;

            if (day-forget >= 1) currSharers = (currSharers - dp[day-forget] + mod) % mod;

            dp[day] = currSharers;
        }

        long long ans = 0;
        for (int i=n-forget+1; i<=n; i++) {
            if (i >= 1) ans = (ans + dp[i]) % mod;
        }
        return ans;
    }
};
