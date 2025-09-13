#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long sum = 0;
        long long min_odd = LLONG_MAX;
        int odd_count = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 2 == 1) {
                odd_count++;
                min_odd = min(min_odd, a[i]);
            }
        }

        long long ans;
        if (odd_count == 0) {
            ans = 0;
        } else if (odd_count % 2 == 1) {
            ans = sum;
        } else {
            ans = sum - min_odd;
        }

        cout << ans << "\n";
    }

    return 0;
}
