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
        set<int>st;
        map<int,int>mp;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            st.insert(v[i]);
            mp[v[i]]++;
        }
        // vector<int>V(st.begin(), st.end());
        // for(int i = 0; i < V.size(); i++)
        // {
        //     cout << V[i] << sp ;
        // }
        // cout << nl;
        int a = 0;
        bool flag = false;
        for(auto& c: st)
        {
            if(c != a)
            {
                flag = true;
                break;
            }
            //cout << c << sp;
            a++;
        }
        //cout << nl;
        if(flag)
        {
            cout << "NO" << nl;
            cn;
        }
        int x = best;
        bool ok = false;
        for(auto& c: mp)
        {
            if(c.s > x)
            {
                ok = true;
            }
            x = c.s;
        }
        cout << (ok?"NO":"YES") << nl;
    }
    return 0;
}