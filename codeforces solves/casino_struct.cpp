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
using namespace std;

struct Casino
{
    int l, r, real;
    bool visited = false;
};

signed main()
{
    let_strt;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<Casino> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].l >> v[i].r >> v[i].real;
        }
        sort(all(v), [](const Casino &a, const Casino &b)
             { return a.l < b.l; });

        int coin = k;
        bool flag = true;
        while (flag)
        {
            flag = false;
            for (int i = 0; i < n; i++)
            {
                int l = v[i].l;
                int r = v[i].r;
                int real = v[i].real;
                if (l <= coin && coin <= r && coin < real)
                {
                    coin = real;
                    flag = true;
                }
            }
        }
        cout << coin << nl;
    }
}
