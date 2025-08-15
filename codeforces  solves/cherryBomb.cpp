#include <bits/stdc++.h>
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define sp ' '
#define nl "\n"
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        vector<int> v(n), v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
            if (v2[i] != -1)
            {
                cnt++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (cnt == 1)
            {
                if (v[i] + v2[i] > k)
                {
                    cout << 0 << nl;
                }
                else
                {
                    cout << 1 << nl;
                    continue;
                }
            }
            else if (cnt > 1)
            {
                if (v2[i] != -1 && v[i] + v2[i] > k)
                {
                    cout << 0 << nl;
                    continue;
                }
            }
        }
        if (cnt == n)
        {
            int mx = *max_element(v.begin(), v.end());
            int mn = *min_element(v.begin(), v.end());
            int dif = mx - mn;
            cout << k - dif + 1 << nl;
        }
        else
        {
            cout << 1 << nl;
        }
    }
}