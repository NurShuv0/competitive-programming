#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define PI 3.14159265358979323846
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define cn continue
#define mod 1000000007
#define best INT_MAX
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
        int n, k;
        cin >> n >> k;
        int a = (n + k - 1) / k;
        int sum = a * k;
        // double ans = (ceil(sum / n));
        int ans = (sum + n - 1)/ n;
        cout << ans << nl;
        // int a = (n + k - 1) / k;
        // int b = (n + k - 1) / n;
        // cout << a * b << nl;
        // cout << ceil(n/k) * ceil(k / n) << nl;
    }
}