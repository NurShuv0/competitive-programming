#include <bits/stdc++.h>
#define sp ' '
#define nl "\n"
#define int long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int greater = 0;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        for (int i = 2; i <= n; i++)
            if (abs(v[i]) >= abs(v[1]))
                greater++;
        if (greater >= ceil(n / 2.0) - 1)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}
