#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define pi 3.14159265358979323846
#define square(n) (n) * (n)
#define cube(n) (n) * (n) * (n)
#define setPrec(n) fixed << setprecision(n)
#define circulate(a, b) (((a % b) + b) % b)
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define cn continue
#define mod 1000000007
#define best LLONG_MAX
#define wrst LLONG_MIN
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;

signed main() {
    let_strt;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        multiset<int>srd;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            srd.insert(a[i]);
        }
        vector<int> b(m), c(m);
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> c[i];
        }
        
        vector<pair<int, int>> rwd, n_rwd;
        for (int i = 0; i < m; i++) {
            if (c[i] > 0) {
                rwd.push_back({b[i], c[i]});
            } else {
                n_rwd.push_back({b[i], 0});
            }
        }
        sort(all(rwd));
        sort(all(n_rwd));
        int ans = 0;
        for (int i = 0; i < rwd.size(); i++) {
            int life = rwd[i].first;
            int r = rwd[i].second;
            //cout << life << sp << rew << nl;
            bool flag = false;
            auto it = srd.lower_bound(life);
            if(it != srd.end())
            {
                flag = true;
            }
            if (flag) {
                int sword = *it;
                //cout << sword << sp;
                int mx = max(sword, r);
                srd.insert(mx);
                srd.erase(it);
                ans++;
            }
            //cout << ans << nl;
        }
        for (int i = 0; i < n_rwd.size(); i++) {
            int life = n_rwd[i].first;
            //cout << life << sp;
            auto it = srd.lower_bound(life);
            bool flag = false;
            if(it != srd.end())
            {
                flag = true;
            }
            if (flag) {
                srd.erase(it);
                ans++;
            }
           // cout << ans <<nl;
        }
        cout << ans << nl;
    }
    return 0;
}