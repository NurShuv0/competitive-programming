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
#define best INT_MAX
#define wrst INT_MIN
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;

int concat(int x, int y) {
    int e = to_string(y).size();
    int d = pow(10,e);
    return x * d + y;
}
signed main()
{
    let_strt;
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        int n = 1e8;
        for (int i = 1; i < n; i++) {
            int val = concat(x, i);
            if (val % (x + i) == 0) {
                cout << i << nl;
                break;
            }
        }
    }
}