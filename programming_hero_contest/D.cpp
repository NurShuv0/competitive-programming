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
        vector<int>v(n);
        int cnt_odd = 0, cnt_even = 0;
        for(int i =0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] % 2 == 0)
            {
                cnt_even++;
            }
            else {
                cnt_odd++;
            }
        }
        if(abs(cnt_even - cnt_odd) > 1)
        {
            cout << "NO" << nl;
        }
        else {
            cout << "YES" << nl;
        }

    }
}