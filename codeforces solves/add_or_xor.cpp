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
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        vector<int> v(101, best);
        v[a] = 0;
        for (int i = a; i <= 100 ; i++)
        {
            if (v[i] == best)
                cn;
            if (i + 1 <= 100)
                v[i + 1] = min(v[i + 1], v[i] + x);
            int nxt = i ^ 1;
            if (nxt <= 100)
                v[nxt] = min(v[nxt], v[i] + y);
        }
        if (v[b] == best)
            cout << -1 << nl;
        else
            cout << v[b] << nl;
    }
}