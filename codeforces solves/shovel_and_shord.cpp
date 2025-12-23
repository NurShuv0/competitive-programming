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
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        // if(a == b)
        // {
        //     cout << a/2 << nl;
        //     cn;
        // }
        int ans = min({a, b, (a + b) / 3});
        cout << ans << nl;
        // while(a >= 1 && b >= 1)
        // {
        //     if(a > b)
        //     {
        //         a -= 2;
        //         b--;
        //         ans++;
        //     }
        //     else{
        //         b -= 2;
        //         a--;
        //         ans++;
        //     }
        // }
        // cout << ans << nl;
    }
}