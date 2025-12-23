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
        if(n == 2)
        {
            cout << -1 << sp << 2 << nl;
            cn;
        }
        for(int i = 0; i < n - 1; i++)
        {
            if(i % 2 == 0)
            {
                cout << -1 << sp;
            }
            else{
                cout << 3 << sp;
            }
        }
        if(n % 2 == 0)
        {
            cout << 2 <<nl;
        }
        else {
            cout << -1 << nl;
        }
    }
}