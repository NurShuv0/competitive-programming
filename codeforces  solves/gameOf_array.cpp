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
        int n;
        cin >> n;
        vector<int>v[n], m;
        vector<pair<int, int>>vp;
        for(int i = 0; i < n; i++)
        {
            int size;
            cin >> size;
            for(int j = 0; j < size; j++)
            {
                int input;
                cin >> input;
                v[i].pb(input);
            }
            sort(all(v[i]));
            int mn = v[i][1];
            vp.pb({i,mn});
            m.pb(*min_element(all(v[i])));
        }
        // for(auto& c: vp)
        // {
        //     cout << c.f << sp << c.s << nl;
        // }
        sort(all(vp),cmp);
        int ans = 0;
        for(auto& c: vp)
        {
            ans += c.s;
        }
        ans -= vp[0].s;
        ans += *min_element(all(m));
        cout << ans << nl;
    }
    return 0;
}