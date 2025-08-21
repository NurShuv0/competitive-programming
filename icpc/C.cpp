#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
using namespace std;

signed main() {
    let_strt
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string vv, v;
        cin >> vv;

        for (int i = 0; i < m; i++) v += vv;
        int len = v.size();

        vector<int> pref(len, 0), suffix(len, 0);

        // Prefix sum
        pref[0] = v[0] - '0';
        for (int i = 1; i < len; i++) {
            pref[i] = pref[i - 1] + (v[i] - '0');
        }

        // Suffix sum
        suffix[len - 1] = v[len - 1] - '0';
        for (int i = len - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + (v[i] - '0');
        }

        int cnt = 0;
        for (int i = 0; i < len - 1; i++) { // ensure i+1 is valid
            if (pref[i] == suffix[i + 1]) {
                cnt++;
            }
        }

        cout << cnt << nl;
    }
}
