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

bool cmp(pair<int,int> a, pair<int,int> b) {
    return a.second < b.second;
}

signed main() 
{
    let_strt;
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int>capacity(n), cost(n);
        for(int i = 0; i < n; i++)
        {
            cin >> capacity[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> cost[i];
        }
        vector<pair<int,int>>vp(n);
        for(int i = 0; i < n; i++)
        {
            vp[i] = {capacity[i], cost[i]};
        }
        sort(all(vp), cmp);
        // for(auto& c: vp)
        // {
        //     cout << c.f << sp << c.s << nl;
        // }
        int ans = k;
        int cnt = 1;
        int i = 0;
        while(cnt < n)
        {
            //cout << i << nl;
            if(vp[i].s >= k)
            {
                ans += (k * (n - cnt));
                break;
            }
            ans += min(n - cnt, vp[i].f) * vp[i].s;
            cnt += vp[i].f;
            i++;
        }
        //cout << cnt << nl;
        cout << ans << nl;
    }
    return 0;
}