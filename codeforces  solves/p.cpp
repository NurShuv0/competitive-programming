#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
using namespace std;

int main() {
    let_strt;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int total_a = count(s.begin(), s.end(), 'a');
        int total_b = n - total_a;

        if (total_a == total_b) {
            cout << 0 << nl;
            continue;
        }
        if (total_a == 0 || total_b == 0) {
            cout << -1 << nl;
            continue;
        }
        unordered_map<int, int> first_occ;
        int diff = 0;
        first_occ[0] = -1;
        int min_len = n + 1;

        for (int i = 0; i < n; ++i) {
            diff += (s[i] == 'a' ? 1 : -1);
            if (first_occ.count(diff)) {
                min_len = min(min_len, i - first_occ[diff]);
            } else {
                first_occ[diff] = i;
            }
        }

        if (min_len > n)
            cout << -1 << nl;
        else
            cout << min_len << nl;
    }
    return 0;
}