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
        vector<int>odd, even;
        bool ok = false;
        for(int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            if(input % 2 == 1)
            {
                ok = true;
            }
            if(input % 2 == 0)
            {
                even.pb(input);
            }
            else {
                odd.pb(input);
            }
        }
        if(!ok)
        {
            cout << 0 << nl;
            cn;
        }
        int ans = 0;
        for(int i = 0; i < even.size(); i++)
        {
            ans += even[i];
        }
        sort(allr(odd));
        int size = ceil(odd.size() / 2.0);
        for(int i = 0; i < size; i++)
        {
            ans += odd[i];
        }
        cout << ans << nl;
        // sort(all(v));
        // bool flag = true;
        // int cnt = 0;
        // int ans = 0;
        // for(int i = 0; i < n; i++)
        // {
        //     if(v[i] % 2 != 0)
        //     {
        //         flag = true;
        //         cnt++;
        //     }
        //     if(cnt % 2 != 0)
        //     {
        //         ans += v[i];
        //     }
        // }
        // cout << ans << nl;
    }
}