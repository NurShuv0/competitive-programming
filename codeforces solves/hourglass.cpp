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
        int s, k, m;
        cin >> s >> k >> m;
        if(m % k == 0)
        {
            if(s <= k)
            {
                cout << s << nl;
                cn;
            }
            if((m / k) % 2 == 0)
            {
                cout << s << nl;
            }
            else {
                cout << min(s, k) << nl;
            }
            //cout << min(s, k) << nl;
            cn;
        }
        // if(s == k)
        // {
        //     cout << min(m % k, m) << nl;
        //     cn;
        // }
        if(s <= (m % k))
        {
            cout << 0 << nl;cn;
        }
        if(k > m)
        {
            if(s > m)
            {
                cout << s - m << nl;
            }
            else {
                cout << 0 << nl;
            }
        }
        else {
            if((m / k) % 2 == 0)
            {
                cout << abs(max(s, k) - (m % k)) << nl;
                cn;
            }
            cout << abs(min(s, k) - (m % k)) << nl;
        }
    }
    return 0;
}