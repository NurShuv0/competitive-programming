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
// int gcd(int a, int b) {return b == 0 ? a : gcd(b, a % b);}
// int lcm (int a,int b ) {return a * (b/gcd(a,b));}
using namespace std;
const int N = 2e5 + 5;
vector<int> adj[N];
vector<bool> visited(N, false);
int node, edge;
vector<int> component;

void dfs(int u)
{
    visited[u] = true;
    node++;
    edge += adj[u].size();
    component.pb(u);
    for (auto &next : adj[u])
    {
        if (!visited[next])
        {
            dfs(next);
        }
    }
}

signed main()
{
    let_strt;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            node = 0;
            edge = 0;
            component.clear();
            if (!visited[i])
            {
                dfs(i);
            }
            if (edge / 2 == node)
            {
                bool cycle = true;
                for (auto &node : component)
                {
                    if (adj[node].size() != 2)
                    {
                        cycle = false;
                        break;
                    }
                }
                if (cycle && node > 2)
                {
                    ans++;
                }
            }
        }
    }
     cout << ans << nl;
}