#include <bits/stdc++.h>
#define sp " "
#define nl "\n"
#define speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;
signed main()
{
    speed int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = n;
        if (n <= k)
        {
            cout << 1 << nl;
            continue;
        }
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                // ans = min(ans , n/i);
                if (i <= k)
                    ans = min(ans, n / i);
                if (n / i <= k)
                    ans = min(ans, i);
            }
        }
        cout << ans << nl;
    }
    return 0;
}