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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> prefix_sum(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            prefix_sum[i] = v[i - 1] + prefix_sum[i - 1];
        }
        vector<int> ans(k);
        vector<pair<int, int>> vp(k);
        for (int i = 0; i < k; i++)
        {
            cin >> vp[i].f;
            vp[i].s = i;
        }
        sort(all(vp));
        int idx = 0;
        for (int i = 0; i < k; i++)
        {
            while (true)
            {
                if (idx == n || v[idx] > vp[i].f)
                {
                    break;
                }
                else
                {
                    idx++;
                }
            }
            ans[vp[i].s] = prefix_sum[idx];
        }
        for (int i = 0; i < k; i++)
        {
            cout << ans[i] << sp;
        }
        cout << nl;
    }
}