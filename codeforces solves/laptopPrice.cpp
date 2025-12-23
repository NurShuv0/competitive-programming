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
    cin >> n;
    vector<pair<int, int>> vp;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vp.pb({a, b});
    }
    sort(all(vp));
    for(int i = 0; i < n - 1; i++)
    {
        if(vp[i].s > vp[i + 1].s)
        {
            cout << "Happy Alex" << nl;
            return 0;
        }
    }
    cout << "Poor Alex" << nl;
    return 0;
}