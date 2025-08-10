#include <bits/stdc++.h>

using namespace std;

#define int int64_t

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--){
        int n , m;
        cin >> n >> m;
        string a;
        cin >> a;
        vector <int> P(n * m , 0) , S(n * m, 0);
        P[0] = a[0] - '0';
        for (int i = 1; i < n * m; i++){
            int d = a[i % n] - '0';
            P[i] += P[i - 1] + d;
        }
        S[n * m - 1] = a[n - 1] - '0';
        for (int i = (n * m) - 2; i >= 0; i--){
            S[i] += S[i + 1] + int(a[i % n] - '0');
        }

        int cnt = 0;
        for (int i = 1; i < n * m; i++){
            if (P[i - 1] == S[i]){
                cnt += 1;
            }
        }
        if (P[n * m - 1] == 0){
            cnt += 1;
        }
        cout << cnt << "\n";
        
    }
    return 0;
}