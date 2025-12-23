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
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int temp = a ^ b;
        if (a == b)
        {
            cout << 0 << nl;
            cn;
        }
        else if (a >= temp)
        {
            cout << 1 << nl << temp << nl;
            cn;
        }
        else
        {
            int temp2 = a | b;
            int temp1 = a ^ (temp2);
            int temp3 = temp2 ^ b;
            if (temp1 <= a && temp3 <= temp2)
            {
                cout << 2 << nl << temp1 << sp << temp3 << nl;
            }
            else
            {
                cout << -1 << nl;
            }
        }
    }
}
