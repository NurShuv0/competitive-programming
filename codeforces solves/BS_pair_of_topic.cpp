#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
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
#define wrst INT_MIN
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
signed main()
{
    let_strt;
    int n;
    cin >>n;
    vector<int>v(n), vv(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> vv[i];
    }
    vector<int>sub(n);
    for(int i = 0; i < n; i++)
    {
        sub[i] = v[i] - vv[i];
    }
    sort(all(sub));
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int nr = upper_bound(sub.begin() + i + 1,sub.end(), -sub[i]) - sub.begin();
        ans += n - nr;

    }
    cout << ans << nl;
}