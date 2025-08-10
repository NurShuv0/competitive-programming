#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
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
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int v[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int s = -1;
    for (int i = 0; i < n; i++)
    {
        if (b[i] != -1)
        {
            if (s == -1)
                s = v[i] + b[i];
            else
            {
                if (s != v[i] + b[i])
                {
                    cout << 0 << nl;
                    return;
                }
            }
        }
    }
    if (s == -1)
    {
        sort(v, v + n);
        int mx = v[n - 1] - v[0];
        cout << k - mx + 1 << nl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] > s || s - v[i] > k)
        {
            cout << 0 << nl;
            return;
        }
    }
    cout << 1 << nl;
}

signed main()
{
    speed int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}