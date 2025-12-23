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
#define best INT_MAX
#define wrst INT_MIN
// int gcd(int a, int b) {return b == 0 ? a : gcd(b, a % b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
signed main()
{
    let_strt;
    int  n, m;
    cin >> n >> m;
    map<string, string>mp;
    for(int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        // mp[b] = a;
        // for(auto &c: mp)
        // {
        //     if(c.f == a)
        //     {
        //         cout << a << sp << b << sp << "#" << c.s;
        //         break;
        //     }
        // }
        mp[b] = a;
    }
    for(int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        string bb = b;
        b.pop_back();
        for(auto &c : mp)
        {
            if(c.f == b)
            {
                cout << a << sp << bb << sp << "#" << c.s << nl;
            }
        }
    }
}