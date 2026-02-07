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
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int gcd_even = 0;
        int gcd_odd = 0;
        for(int i = 0; i < n; i++)
        {
            if(i % 2)
            {
                gcd_odd = __gcd(gcd_odd, v[i]);
            }
            else {
                gcd_even = __gcd(gcd_even, v[i]);
            }
        }
        //cout << gcd_even << sp << gcd_odd << nl;
        bool flag = false;
        for(int i = 0; i < n; i += 2)
        {
            if(v[i] % gcd_odd == 0)
            {
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            cout << gcd_odd << nl;
            cn;
        }
        for(int i = 1; i < n; i += 2)
        {
            if(v[i] % gcd_even == 0)
            {
                flag = false;
            }
        }
        cout << (!flag? 0:gcd_even) << nl;
    }
    return 0;
}