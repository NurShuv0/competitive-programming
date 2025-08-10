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
    int t;
    cin >> t;
    while(t--)
    {
        int n, left, right;
        cin >> n >> left >> right;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int low = left - v[i];
            int up = right - v[i];
            int dis_left = lower_bound(v.begin() + i + 1, v.end(), low) - v.begin();
            int dis_right = upper_bound(v.begin() + i + 1, v.end(), up) - v.begin();
            ans += (dis_right - dis_left);
        }
        cout << ans << nl;
    }
}