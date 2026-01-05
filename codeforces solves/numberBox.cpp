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
        int row, col;
        cin >> row >> col;
        int cnt = 0;
        int n = row * col;
        int ans = 0;
        vector<int>v;
        int mn = best;
        int mn_pos = best;
        bool zero = false;
        while(n--)
        {
            int nr;
            cin >> nr;
            if(nr < 0)
            {
                v.pb(nr);
                cnt++;
                nr = abs(nr);
            }
            mn = min(mn, nr);
            // if(nr > 0)
            // {
            //     mn_pos = min(nr, mn_pos);
            // }
            if(nr == 0)zero = true;
            //cout << ans << sp;
            ans += nr;
        }
       // sort(all(v));
       // int mn = min(abs(v.back()), mn_pos);
       // cout << mn << sp << mn_pos << nl;
        //cout << ans << nl;
        cout << (cnt % 2 == 0 || zero?ans : (ans - (2*mn))) << nl;
    }
    return 0;
}