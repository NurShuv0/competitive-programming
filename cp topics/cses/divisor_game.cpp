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
        if(is_sorted(all(v)))
        {
            cout << "Bob" << nl;
            cn;
        }
        vector<int>ans;
        for(auto &c: v)
        {
            vector<int>prime;
            if(c == 1)
            {
                ans.pb(c);
                cn;
            }
            for(int i = 2; i * i <= c; i++)
            {
                while(c % i == 0)
                {
                    prime.pb(i);
                    c /= i;
                }
               // prime.pb(c);
            }
            if(c != 1)
            {
                prime.pb(c);
            }
            reverse(all(prime));
            ans.insert(ans.end(), all(prime));
        }
        // for(auto c: ans)
        // {
        //     cout << c << sp;
        // }
        // cout << nl;
        if(is_sorted(all(ans)))
        {
            cout << "Bob" << nl;
        }
        else{
            cout << "Alice" << nl;
        }
    }
    return 0;
}