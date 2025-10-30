#include<bits/stdc++.h>
#define sp " "
#define nl "\n"
#define int long long
using namespace std;
signed main()
{
    int n, x;
    cin >> n >> x;
    vector<int>v(n + 1);
    v[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    map<int, int>cnt;
    cnt[0] = 1;
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        v[i] += v[i-1];
        ans += cnt[v[i] - x];
        cnt[v[i]]++;
    }
    cout << ans <<nl;
    
}
