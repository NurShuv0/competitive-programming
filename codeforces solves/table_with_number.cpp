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
        int n, a, b;
        cin >> n >> a >> b;
        vector<int>v;
        int up = 0, less =0;
        for(int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            if(input <= max(a,b))
            {
                if(input <= a)
                {
                    less++;
                }
                if(input <= b)
                {
                    up++;
                }
                v.pb(input);
            }
        }
        //sort(all(v));
        //int less = upper_bound(v.begin(), v.end(), min(a,b)) - v.begin();
        //int up = v.size() - less;
        //cout << less << sp << up << nl;
        if(a == b)
        {
            cout << v.size()/2 << nl;
            cn;
        }
        int aa = v.size();
        cout << min({less, up, aa/2}) << nl;
    
    }
    return 0;
}