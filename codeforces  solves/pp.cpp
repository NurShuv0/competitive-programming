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
#define best LLONG_MAX
#define wrst LLONG_MIN
using namespace std;

signed main()
{
    let_strt;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int cnt_a = count(all(str), 'a');
        int cnt_b = n - cnt_a;

        if (cnt_a == cnt_b)
        {
            cout << 0 << nl;
            cn;
        }
        if (cnt_a == 0 || cnt_b == 0)
        {
            cout << -1 << nl;
            cn;
        }

        int diff = cnt_a - cnt_b; 
        int ans = best;
        for (int i = 0; i < n; i++)
        {
            int a_removed = 0, b_removed = 0;
            for (int j = i; j < n; j++)
            {
                if (str[j] == 'a') a_removed++;
                else b_removed++;

                if (a_removed - b_removed == diff)
                    ans = min(ans, j - i + 1);
            }
        }

        if (ans == best || ans == n)
            cout << -1 << nl;
        else
            cout << ans << nl;
    }
    return 0;
}
