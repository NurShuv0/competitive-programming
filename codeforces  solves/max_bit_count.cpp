#include <bits/stdc++.h>
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
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
#define wrst INT_MIN
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
signed main()
{
    speed;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int max_1 = wrst, ans = wrst;
    for (int i = 0; i < n; i++)
    {
        int value = v[i];
        int cnt = 0;
        while (value)
        {
            if(value & 1)
            {
                cnt++;
            }
            value >>= 1;
        }
        if (cnt > max_1)
        {
            max_1 = cnt;
            ans = v[i];
        }
    }
    cout << ans << sp << max_1 << nl;
}