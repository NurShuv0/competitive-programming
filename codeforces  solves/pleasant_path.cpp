#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200000;
int N, S;
int pleasant[MAXN + 1];
vector<int> adj[MAXN + 1];
int dp[MAXN + 1]; // memoization for longest path from node

int dfs(int u) {
    if (dp[u] != -1) return dp[u];
    int max_len = 1; // at least the current station
    for (int v : adj[u]) {
        if (pleasant[v] > pleasant[u]) {
            max_len = max(max_len, 1 + dfs(v));
        }
    }
    return dp[u] = max_len;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> S;
    for (int i = 1; i <= N; i++) {
        cin >> pleasant[i];
    }
    for (int i = 0; i < N - 1; i++) {
        int U, V;
        cin >> U >> V;
        adj[U].pb(V);
        adj[V].pb(U);
    }

    memset(dp, -1, sizeof(dp));
    int result = dfs(S);
    cout << result << "\n";

    return 0;
}
