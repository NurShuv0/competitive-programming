#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define pi 3.14159265358979323846
#define square(n) (n) * (n)
#define cube(n) (n) * (n) * (n)
#define setPrec(n) fixed << setprecision(n)
#define circulate(a, b) (((a % b) + b) % b)
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define cn continue
#define mod 1000000007
#define best INT_MAX
#define wrst INT_MIN
// int gcd (int a,int b) {return __gcd(a,b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
const int maxn = 1e5 + 1;
vector<int>adj[maxn];
vector<bool>visited(maxn);
vector<int>cost(maxn);
int dfs(int s)
{
    visited[s] = true;
    int mn = cost[s];
    for(auto &nxt: adj[s])
    {
        if(!visited[nxt])
        {
            mn = min(dfs(nxt), mn);
        }
    }
    return mn;
}
signed main()
{
    let_strt;
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> cost[i];
    }
    for(int i = 0; i < m; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
            ans += dfs(i);
        }
    }
    cout << ans << nl;

}