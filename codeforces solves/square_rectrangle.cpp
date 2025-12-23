#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define PI 3.14159265358979323846
#define db double
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
    speed 
    int t;
    cin >> t;
    while (t--)
    {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        int S = max({l1, l2, l3, b1, b2, b3});
        bool flag = false;
        if (b1 == b2 && b2 == b3 && l1 + l2 + l3 == b1 && b1 == S)
            flag = true;
        if (l1 == l2 && l2 == l3 && b1 + b2 + b3 == l1 && l1 == S)
            flag = true;
        if (l1 == l2 + l3 && b2 == b3 && b1 == b2 + b3 && l1 == b1)
            flag = true;
        if (b1 == b2 + b3 && l2 == l3 && l1 == l2 + l3 && b1 == l1)
            flag = true;

        vector<pair<int, int>> vp = {{l1, b1}, {l2, b2}, {l3, b3}};
        sort(vp.begin(), vp.end());
        for (int i = 0; i < 6; i++)
        {
            int L1 = vp[0].f, B1 = vp[0].s;
            int L2 = vp[1].f, B2 = vp[1].s;
            int L3 = vp[2].f, B3 = vp[2].s;
            int side = max({L1, L2, L3, B1, B2, B3});
            if (L1 == side && L2 + L3 == side && B2 == B3 && B1 + B2 == side)
                flag = true;
            if (B1 == side && B2 + B3 == side && L2 == L3 && L1 + L2 == side)
                flag = true;
            next_permutation(vp.begin(), vp.end());
        }
        cout << ((flag)?"YES":"NO" )<< nl;
    }
}