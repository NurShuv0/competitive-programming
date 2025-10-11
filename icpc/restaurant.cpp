#include<bits/stdc++.h>
#define sp " "
#define nl "\n"
#define int long long
using namespace std;
signed main()
{
    int n;
    cin >> n;
    vector<pair<int,int>>vp;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vp.push_back({a,1});
        vp.push_back({b,-1});
    }
    //for(auto& c: vp)
    //{
       // cout << c.first << sp << c.second << nl;
   // }
    sort(vp.begin(), vp.end());
    int ans = 0;
    int nur = 0;
    for(int i = 0; i < vp.size(); i++)
    {
        nur += vp[i].second;
        ans = max(ans, nur);
    }
    cout << ans << nl;
}
