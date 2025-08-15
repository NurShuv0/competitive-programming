#include <bits/stdc++.h>
#define nl "\n"
#define sp ' '
#define int long long
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int angle;
        cin >> angle;
        //int n = (360) / (180 - angle);
        cout << ((360) % (180 - angle) == 0 ? "YES" : "NO") << nl;
    }
}