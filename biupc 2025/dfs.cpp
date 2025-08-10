#include <bits/stdc++.h>
#define let_strt ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"
#define int long long
#define sp ' '
#define PI 3.14159265358979323846
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

const int MAXN = 405;

vector<int> graph[MAXN];
bool visited[MAXN];

void dfs(int node, int &nodes, int &edges) {
    visited[node] = true;
    nodes++;
    edges += graph[node].size();

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, nodes, edges);
        }
    }
}

signed main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            int nodes = 0, edges = 0;
            dfs(i, nodes, edges);
            edges /= 2;
            if (edges != (nodes * (nodes - 1)) / 2) {
                cout << "NO" << nl;
                return 0;
            }
        }
    }

    cout << "YES" << nl;
    return 0;
}
