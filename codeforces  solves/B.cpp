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
        // for(auto& c: mp)
        // {
        //     cout << c.f << sp << c.s << nl;
        // }
        vector<int>p,q;
        cout << p.size() << sp << q.size();
        int i = 0;
        for(auto& c: mp)
        {
            if(p.size() < n)
            {
                p[i] = c.f;
            }
            else {
                q.pb(c.f);
            }
            i++;
        }
        p.pb(0), q.pb(0);
        //cout << p.size() << sp << q.size() << nl;
        for(auto& c: mp)
        {
            int freq = c.s - 1;
            if(p.size() <= n)
            {
                //cout << "YES" << nl;
                while(freq--)
                {
                    p.pb(c.f);
                }
            }
            else {
                while(freq--)
                {
                    q.pb(c.f);
                }
            }
        }
        int ans = 0;
        map<int,int>mpp, mq;
        for(int i = 1; i <= n; i++)
        {
            mpp[p[i]]++;
            mq[q[i]]++;
        }
        for(auto& c: mpp)
        {
            if(c.s % 2 == 0)
            {
                cn;
            }
            else {
                ans++;
            }
        }
        for(auto& c: mq)
        {
            if(c.s % 2 == 0)
            {
                cn;
            }
            else {
                ans++;
            }
        }
        //cout << ans << nl;


    }
    return 0;
}