#include<bits/stdc++.h>
#define sp ' '
#define nl "\n"
#define int long long
using namespace std;

int n;
vector<int>v(1e5+5), dp(1e5+5,-1);

int solve(int i)
{
    if(i == n) return 0;
    if(dp[i] != -1) return dp[i];
    int ans1 = abs(v[i] - v[i+1]) + solve(i+1);
    int ans = ans1;
    if(i+2 <= n)
    {
        int ans2 = abs(v[i] - v[i+2]) + solve(i+2);
        ans = min(ans1,ans2);
    }
    //int ans = min(ans1, ans2);
    dp[i] = ans;
    return ans;
}

signed main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    cout << solve(1);
}