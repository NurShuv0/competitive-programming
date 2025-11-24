#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];
        int xa = 0, xb = 0;
        for (int i = 0; i < n; ++i)
        {
            xa ^= a[i];
            xb ^= b[i];
        }
        if (xa == xb)
        {
            cout << "Tie\n";
            continue;
        }
        int last_diff = -1;
        for (int i = n - 1; i >= 0; i--)
            if (a[i] != b[i])
            {
                last_diff = i;
                break;
            }
        if (last_diff % 2 == 0)
            cout << "Ajisai\n";
        else
            cout << "Mai\n";
    }
    return 0;
}