#include<bits/stdc++.h>
#define int long long
#define sp " "
#define nl "\n"
#define best LLONG_MAX
using namespace std;

int n, k;
vector<int>v(1e5 + 5), dp(1e5 + 5, -1);

int solve(int i)
{
    if(i == n) return 0;
    if(dp[i] != -1) return dp[i];
    int ans = best;
    for(int j = 1; j <= k; j++)
    {
        if(i + j > n) break;
        int cost = abs(v[i] - v[i+j]) + solve(i + j);
        ans = min(ans, cost);
    }
    dp[i] = ans;
    return ans;
}

signed main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    cout << solve(1) << nl;
}