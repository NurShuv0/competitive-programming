#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), c(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> c[i];

        vector<long long> dp(n);
        long long total = 0;
        for (int i = 0; i < n; ++i) total += c[i];

        long long best = 0;
        for (int i = 0; i < n; ++i) {
            dp[i] = c[i];
            for (int j = 0; j < i; ++j) {
                if (a[j] <= a[i]) dp[i] = max(dp[i], dp[j] + c[i]);
            }
            best = max(best, dp[i]);
        }

        cout << (total - best) << '\n';
    }
    return 0;
}