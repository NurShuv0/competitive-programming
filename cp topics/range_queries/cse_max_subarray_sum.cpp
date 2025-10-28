#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define int long long
signed main()
{
    int n;
    cin >> n;
    vector<int>v(n+1);
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<int>pref(n+1);
    pref[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        pref[i] = pref[i-1] + v[i];
        //cout << pref[i] << nl;
    }
    int ans = LLONG_MIN;
    int min_pref_sum = v[0];
    for(int i = 1; i <= n; i++)
    {
        ans = max(ans, pref[i] - min_pref_sum);
        min_pref_sum = min(pref[i], min_pref_sum);
    }
    cout << ans << nl;}
