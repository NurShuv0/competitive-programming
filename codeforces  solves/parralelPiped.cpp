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
#define wrst INT_MIN
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
signed main()
{
    let_strt;
    int a, b, c;
    cin >> a >> b >> c;
    long double s1 = sqrt((a * c)/ (double)b);
    long double s2 = sqrt((a * b) / (double)c);
    long double s3 = sqrt((b * c)/(double) a);
    cout << 4 * (s1 + s2 + s3) << nl;
}