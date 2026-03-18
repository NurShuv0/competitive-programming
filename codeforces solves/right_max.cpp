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
        int ans = 0;
        vector<int>pref_mx(n);
        pref_mx[0] = v[0];
        for(int i = 1; i < n; i++)
        {
            pref_mx[i] = max(v[i], pref_mx[i-1]);
        }
        // for(int i = 0; i < n; i++)
        // {
        //     cout << pref_mx[i] << sp;
        // }
        // cout << nl;
        for(int i = n-1; i > 0; i--)
        {
            // cout << v[i] << sp  << pref_mx[i-1] << nl;
            if(v[i] >= pref_mx[i-1])
            {
                ans++;
            }
        }
        cout << ans + 1<< nl;
    }
    return 0;
}