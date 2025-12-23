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
// int gcd(int a, int b) {return b == 0 ? a : gcd(b, a % b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;

long long f(int n) {
    if(n >= 1){
        int x = n - n/2 - n/3 - n/5 - n/7 
           + n/6 + n/10 + n/14 + n/15 + n/21 + n/35 
           - n/30 - n/42 - n/70 - n/105 + n/210;
           return x;
    }
    else {
        return 0;
    }
}

signed main() {
    let_strt
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int ans = f(r) - f(l - 1);
        cout << ans << nl;
    }
    return 0;
}