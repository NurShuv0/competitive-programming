#include <bits/stdc++.h>
#define let_start ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define PI 3.14159265358979323846
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define cn continue
#define mod 1000000007
#define best INT_MAX
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
signed main()
{
    let_start;
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        string str;
        cin >> str;
        if (c == 'g') {
            cout << 0 << nl;
            cn;
        }
        string doubled = str + str;
        vector<int>v;
        for (int i = 0; i < 2 * n; i++) {
            if (doubled[i] == 'g') {
                v.pb(i);
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (str[i] == c) {
                auto it = lower_bound(all(v), i);
                if (it != v.end()) {
                    ans = max(ans, *it - i);
                }
            }
        }

        cout << ans << nl;
    }
}
