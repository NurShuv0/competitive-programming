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
#define best INT_MAX
#define wrst INT_MIN
// int gcd(int a, int b) {return b == 0 ? a : gcd(b, a % b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
signed main()
{
    int n, k;
    cin >> n >> k;
    pair<int,int>pr;
    vector<pair<int,int>>vp;
    for(int i = 0; i < n; i++)
    {
        int p, t;
        cin >> p >> t;
        pr = make_pair(p * -1,t);
        vp.pb(pr);
    }
    sort(all(vp));
    int cnt = 0;
    for(auto &x: vp)
    {
        if(x == vp[k - 1])
        {
            cnt++;
        }
        if(x < vp[k]) break;
    }
    cout << cnt << nl;
}