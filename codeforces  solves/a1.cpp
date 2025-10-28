#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }    
        long long ans = -1;
        for (long long x = 2; x <= 100000; x++) {
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (gcd(a[i], x) == 1) {
                    found = true;
                    break;
                }
            }
            if (found) {
                ans = x;
                break;
            }
        }
        
        cout << ans << '\n';
    }
    
    return 0;
}