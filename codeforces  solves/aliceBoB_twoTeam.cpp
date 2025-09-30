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
    //int t;
    //cin >> t;
    //while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        string str;
        cin >> str;
        int bob = 0;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == 'B')
            {
                bob += v[i];
            }
        }
        //cout << bob;
        vector<int>gain(n);
        for(int i = 0; i < n; i++)
        {
            if(str[i] == 'A')
            {
                gain[i] = v[i];
            }
            else {
                gain[i] = -v[i];
            }
        }
        // for(auto& i:gain)
        // {
        //     cout << i << sp;
        // }
        // cout << nl;
        int ans = bob;
        int pref = 0;
        for(int i = 0; i < n; i++)
        {
            pref += gain[i];
            ans = max(ans, bob + pref);
        }
        int suf = 0;
        for(int i = n - 1; i > 0; i--)
        {
            suf += gain[i];
            ans  = max(ans, bob + suf);
        }
        cout << ans << nl;

    }
    return 0;
}