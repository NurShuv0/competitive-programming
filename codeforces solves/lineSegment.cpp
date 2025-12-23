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
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
signed main()
{
    let_strt;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int px, py, qx, qy;
        cin >> px >> py >> qx >> qy;
        int total = 0;
        vector<int>v;
        for (int i = 0; i < n; ++i)
        {
            int step;
            cin >> step;
            v.pb(step);
            total += step;
        }
        int mx = *max_element(all(v));
        int diff_x = qx - px;
        int diff_y = qy - py;
        int total_xy = diff_x * diff_x + diff_y * diff_y;
        long double dist = sqrt(total_xy);
        if(dist > total || 2 * mx - total > dist)
        {
            cout << "NO" << nl;
        }
        else cout << "YES" << nl;
    }
}