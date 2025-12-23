#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = -1;
        for (int p = 2; p <= 200000; p++) {
            if (!isPrime(p)) continue;

            bool ok = false;
            for (long long x : a) {
                if (x % p != 0) { 
                    ok = true;
                    break;
                }
            }
            if (ok) {
                ans = p;
                break;
            }
        }

        cout << ans << "\n";
    }
}