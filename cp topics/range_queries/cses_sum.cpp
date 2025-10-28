#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl "\n"
signed main()
{
    int n, q;
    cin >> n >> q;
    vector<int>v(n+1);
    for(int i = 1; i <= n;  i++)
    {
        cin >> v[i];
    }
    vector<int>pref(n+1);
    pref[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        pref[i] = v[i] + pref[i-1];
        //cout << pref[i] << nl;
    }
    for(int i = 0; i < q; i++)
    {
        int l,  r;
        cin >> l >> r;
        cout << pref[r] - pref[l-1] << nl;
    }
}