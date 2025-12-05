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
        int n;
        cin >> n;
        vector<pair<int,string>>vp(n);
        for(int i = 0; i < n; i++)
        {
            int a;
            string b;
            cin >> a >> b;
            vp[i] = {a, b};
            //cout << vp[i].f << sp << vp[i].s << nl;
        }
        // if(n == 1)
        // {
        //     //cout << vp[0].f  << nl;
        //     //cn;
        // }
        sort(all(vp));
        // for(auto& c: vp)
        // {
        //     cout << c.f << sp << c.s << nl;
        // }
        int ans = best;
        int ans2 = best;
        //cout << ans2 << sp << ans << nl;
        bool ok = false;
        bool fst = false;
        for(auto& c: vp)
        {
            string str = c.s;
            if(str[0] == '1' && str[1] == '1' && !ok)
            {
                ans = c.f;
                ok = true;
            }
            if(str[0] == '1' && !fst)
            {
                ans2 = c.f;
                //cout << "hello" << nl;
                fst = true;
            }
        }
        bool snd = false;
        for(auto& c: vp)
        {
            string str = c.s;
            if(str[1] == '1' && !snd)
            {
                ans2 += c.f;
                //cout << "Hello " << nl;
                snd = true;
                break;
            }
        }
        if(!ok)
        {
            if(!fst && !snd)
            {
                cout << -1 << nl;
                cn;
            }
        }
        if((!fst && snd) ||(fst && !snd))
        {
            cout << -1 << nl;
            cn;
        }
        if(fst && snd)
        {
            cout << min(ans, ans2) << nl;
            cn;
        }
        else{
            cout << ans << nl;
        }
        //cout << ans << sp << ans2  << nl;
        // cout << min(ans, ans2) << nl;
    }
    return 0;
}