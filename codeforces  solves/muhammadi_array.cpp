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
        vector<int>v(n),c(n);
        int cost = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> c[i];
            cost += c[i];
        }
        int mx = 0;
        int temp;
        vector<int>tm(n);
        for(int i = 0; i < n; i++)
        {
            tm[i] = c[i];
            for(int j = 0; j < i; j++)
            {
                if(v[i] <= v[j])
                {
                    tm[i] = max(c[i], tm[j] + c[i]);
                }
                mx = max(mx, tm[i]);
            }
        }
        cout << (cost - mx) << nl;

    }
    return 0;
}