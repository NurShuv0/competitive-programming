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
signed main()
{
    let_strt;
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<int>va(n + 1), vb(n + 1);
        for(int i = 1; i <= n; i++)
        {
            cin >> va[i] >> vb[i];
        }
        int ans = (abs(va[a] - va[b]) + abs(vb[a] - vb[b]));
        //cout << ans << nl;
        if(k == 0)
        {
            cout << ans << nl;
            cn;
        }
        int priceA  = best, priceB = best;
        for(int i = 1; i <= k; i++)
        {
            priceA = min(priceA, abs(va[a] - va[i]) + abs(vb[a] - vb[i]));
            priceB = min(priceB, abs(va[b] - va[i]) + abs(vb[b] - vb[i]));
        }
        //cout << priceA + priceB << nl;
        cout << min(ans, priceA + priceB) << nl;
    }
}