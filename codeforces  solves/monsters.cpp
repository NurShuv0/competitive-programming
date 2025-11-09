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
    if(a.s == b.s)
    {
        return a.f < b.f;
    }
    return a.second > b.second; 
}

signed main() 
{
    let_strt;
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int>ans;
        vector<pair<int,int>>vp;
        for(int i = 1; i <= n; i++)
        {
            int input;
            cin >> input;
            if(input % k == 0)
            {
                ans.pb(i);
                cn;
            }
            vp.pb({i, input % k});
        }
        sort(all(vp), cmp);
        // for(auto& c: vp)
        // {
        //     cout << c.f << sp << c.s << nl;
        // }
        //sort(all(vp));
        for(int i = 0; i < vp.size(); i++)
        {
            ans.pb(vp[i].f);
        }
        for(int i = 0; i < ans.size();  i++)
        {
            cout << ans[i] << sp;
        }
        cout << nl;

    }
    return 0;
}