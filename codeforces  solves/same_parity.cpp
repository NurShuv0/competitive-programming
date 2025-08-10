//https://codeforces.com/problemset/problem/1352/B
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
    let_strt;
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        if(n == k)
        {
            cout << "YES" << nl;
            for(int i = 0; i < n; i++)
            {
                cout << 1 << sp;
            }
            cn;
        }
        if(n < k)
        {
            cout <<"NO" << nl;
            cn;
        }
        if(n % 2 != 0 && k % 2 == 0)
        {
            cout << "NO" << nl;
            cn;
        }
        if((n % 2 == 0 && k % 2 != 0 && n / 2 < k))
        {
            cout << "NO" << nl;
            cn;
        }
        if((n % 2 == 0 && k % 2 != 0))
        {
            cout << "YES" << nl;
            for(int i = 0; i < k - 1; i++)
            {
                cout << 2 << sp;
            }
            cout << (n - (2 * (k - 1))) << nl;
            cn;
        }
        else{
            cout << "YES" << nl;
            for(int i = 0; i < k-1; i++)
            {
                cout << 1 << sp;
            }
            cout << n - (k - 1) << nl;
            cn;
        }

    }
}