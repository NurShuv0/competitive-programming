#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
using namespace std;

signed main() 
{
    let_strt;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int maxVal = 0;
        int sum = 0;
        
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxVal = max(maxVal, a[i]);
            sum += a[i];
        }
        

        int ans = (n - 1) * maxVal + (sum - maxVal);
        cout << ans << nl;
    }
    return 0;
}