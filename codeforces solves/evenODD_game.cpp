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
        sort(allr(v));
        int ans = 0;
        int check1 = 0, check2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(v[i] % 2 == 0 && i % 2 == 0)
            {
                ans += v[i];
                //check1 += v[i];
            }
            else if(v[i] % 2 != 0 && i % 2 == 0)
            {
                //check1 += v[i];
                cn;
            }
            else if(v[i] % 2 != 0 && i % 2 != 0)
            {
                ans -= v[i];
                //check2 += v[i];
            }
            else if(v[i] % 2 == 0 && i % 2 != 0){
                //check2 += v[i];
                cn;
            }
        }
        //cout << ans << sp << check1 << sp << check2 << nl;
        if(ans == 0)
        {
            cout << "Tie" << nl;
            cn;
        }
        cout << (ans > 0?"Alice":"Bob") << nl;
    }
    return 0;
}