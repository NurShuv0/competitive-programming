#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define pi 3.14159265358979323846
#define square(n) (n)*(n)
#define cube(n) (n)*(n)*(n)
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
int combination(int n, int r)
{
    return ((n * (n - 1)) / r);
}
signed main()
{
    let_strt;
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    int mx = *max_element(all(v));
    int mn = *min_element(all(v));
    int diff = mx - mn;
    cout << diff << sp;
    int cnt_mx = count(all(v), mx);
    int cnt_mn = count(all(v), mn);
    int ways = cnt_mx * cnt_mn;
    if(v.front() == v.back())
    {
        ways = combination(n, 2);
    }
    // if(v.front() == v.back() && n == 2)
    // {
    //     ways = 1;
    // }
    cout << ways << nl;
}
