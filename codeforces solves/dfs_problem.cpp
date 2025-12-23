#include <bits/stdc++.h>
#define nl "\n"
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int main()
{
    speed
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 1;
        for (int i = 1; i <= n; i++)
        {
            int node = v[i];
            int dep = 1;
            while (node != -1)
            {
                node = v[node];
                dep++;
            }
            ans = max(ans, dep);
        }
        cout << ans << nl;
    }
}