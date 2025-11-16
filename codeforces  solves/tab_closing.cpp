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
        int a, n , b;
        cin >> a >> b >> n;
        int ans = 0;
        if(a == b)
        {
            cout << 1 << nl;
            cn;
        }
        if(floor(a/n) < b)
        {
            cout << 2 << nl;
            cn;
        }
        while(n > 0)
        {
            double m = (a /(double) n);
            //cout << m << sp;
            if(m < b)
            {
                ans++;
                n--;
                //cout << ans << sp;
            }
            else {
                ans++;
                //cout << ans << sp;
                break;
            }
        }
        cout << ans << nl;
      //  cout << nl;
    }
    return 0;
}