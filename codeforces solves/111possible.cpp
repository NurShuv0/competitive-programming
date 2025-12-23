#include <bits/stdc++.h>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define int long long
using namespace std;
signed main()
{
    speed
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool flag = false;
        for (int i = 0; i <= n; i++) {
            if (n >= i * 111 && (n - i * 111) % 11 == 0) {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << nl;
    }
}
