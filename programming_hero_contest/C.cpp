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
#define mset(m, v) memset(m, v, sizeof(m))
#define cn continue
#define mod 1000000007
#define best INT_MAX
#define wrst INT_MIN

using namespace std;

signed main()
{
    let_strt
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int cnt = 0;
        for (int i = 0; i < n;)
        {
            int left = i, right = i + 1;
            bool flag = true;
            if (v[left] == 0)
            {
                cnt++;
                while (flag && right < n)
                {
                    if (v[right] == 1)
                    {
                        flag = false;
                        i = right + 1;
                    }
                    else
                    {
                        right++;
                    }
                }
                if (flag) i = right; 
            }
            else
            {
                i++;
            }
        }
        if (v[0] == 1)
        {
            cout << cnt << nl;
        }
        else
        {
            cout << cnt - 1 << nl;
        }
    }
}
