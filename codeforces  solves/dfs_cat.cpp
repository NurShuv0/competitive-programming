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

const int N = 1e5 + 5;
vector<int>adj[N];
vector<bool>visited(N, false);
vector<int>cat;
int ans = 0;
int n, m;

void dfs(int node, int parent, int cat_cnt)
{
    visited[node] = true;
    if(cat[node] == 1)
    {
        cat_cnt++;
    }
    else {
        cat_cnt = 0;
    }
    if(cat_cnt > m)
    {
        return;
    }
    bool leaf = true;
    for(auto &next: adj[node])
    {
        if(next != parent)
        {
            leaf = false;
            dfs(next, node, cat_cnt);
        }
    }
    if(leaf)ans++;
}

signed main()
{
    cin >> n >> m;
    cat.resize(n + 1);
    for(int i = 1; i <= n; i++)
    {
        cin >> cat[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(1, 0, 0);
    cout << ans << nl;
}