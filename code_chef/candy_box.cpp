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
        vector<int>v(n);
        map<int,int>mp;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        vector<int>fv;
        for(auto& c:mp)
        {
           // cout << c.f << sp << c.s << nl;
            fv.pb(c.s);
        }
        sort(allr(fv));
        int ans = 0;
        int prev = best;
        for(int i = 0; i < fv.size(); i++)
        {
            if(fv[i] < prev)
            {
                ans += fv[i];
                prev = fv[i];
            }
            else {
                prev -= 1;
                ans += prev;
            }
            if(prev <= 0) break;
        }
        cout << ans << nl;

    }
    return 0;
}