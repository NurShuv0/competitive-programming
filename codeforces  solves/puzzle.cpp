#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define PI 3.14159265358979323846
#define db double
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
    int n, m;
    cin >> n >> m;
    vector<int>v(m);
    for(int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    int ans = best;
    for(int i = 0; i <= (m - n); i++)
    {
        ans = min(ans, v[i + n - 1] - v[i]);
    }
    cout << ans << nl;
}