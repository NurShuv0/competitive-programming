#include <bits/stdc++.h>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define int long long
using namespace std;
signed main()
{
    speed;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n ;
        cout << (n - 1) + (n - 2) << nl;
        for (int i = 2; i <= n; i++)
        {
            cout << i << " 1 " << i << nl;
        }
        for(int i = 1; i < n - 1; i++)
        {
            cout << i << sp << i + 1 << sp << n << nl;
        }
    }
    return 0;
}