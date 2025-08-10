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
#define mset(m, v) memset(m, v, sizeof(m))
#define cn continue
#define mod 1000000007
#define best INT_MAX
#define wrst INT_MIN

// int gcd(int a, int b) {return b == 0 ? a : gcd(b, a % b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}

using namespace std;
signed main()
{
    let_strt
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        vector<int>prefix(n,0),suffix(n,0);
        unordered_set<char>ust;
        for(int i = 0; i < n; i++)
        {
            ust.insert(str[i]);
            prefix[i] = ust.size();
        }
        ust.clear();
        for(int i = n-1; i >= 0; i--)
        {
            ust.insert(str[i]);
            suffix[i] = ust.size();
        }
        ust.clear();
        int ans = 0;
        for(int i = 0; i < n - 1; i++)
        {
            ans = max(ans, prefix[i] + suffix[i + 1]);
        }
        cout << ans << nl;
        // map<char,int>mp;
        // for(auto &c: str)
        // {
        //     mp[c]++;
        // }
        // int ans = 0;
        // for(auto &x:mp)
        // {
        //     if(x.s > 1)
        //     {
        //         ans += 2;
        //     }
        //     else{
        //         ans++;
        //     }
        // }
        // cout << ans << nl;
    }
}